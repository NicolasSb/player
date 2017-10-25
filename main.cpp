#include <iostream>
#include "back/multimediaApi.h"
#include <gtkmm-3.0/gtkmm/main.h>
#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/button.h>

using namespace std;


static void create_gtk_window(int argc, char **argv)
{
    Gtk::Main app(argc, argv);
    Gtk::Window fenetre;
    fenetre.set_border_width(10);
    fenetre.maximize();
    fenetre.set_title("awesome_player");
    Gtk::Button bouton("clik");

    fenetre.add(bouton);
    bouton.show();
    bouton.signal_clicked().connect([]() { Gtk::Main::quit(); });
    Gtk::Main::run(fenetre);
}


int main(int argc, char **argv)
{
    create_gtk_window(argc, argv);
    string path = "test_path";
    string title = "test_title";
    string &p = path, &t = title;
    MultimediaApi m;
    m.addAudioFile(p, t);
    m.display();
    return 0;
}
