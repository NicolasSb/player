#include "myWindow.h"
#include "multimediaApi.h"
#include <gtkmm-3.0/gtkmm/main.h>
#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/button.h>
#include <gtkmm-3.0/gtkmm/box.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/frame.h>
#include <gtkmm-3.0/gtkmm/table.h>


using namespace Gtk;

MyWindow::MyWindow()
{

}

void MyWindow::run_window(MultimediaApi m)
{
    initWindow(m);
    createContainers();
    update(m);
    _fenetre.show_all();
    Main::run(_fenetre);
}

void MyWindow::initWindow(MultimediaApi m)
{
    _fenetre.set_border_width(10);
    _fenetre.maximize();
    _fenetre.set_title("awesome_player");
}

void MyWindow::createContainers()
{
    _mainTable.resize(1,5);
    _fenetre.add(_mainTable);

    _mainTable.attach(_leftFrame, 0,1,0,1, Gtk::EXPAND | Gtk::FILL, Gtk::EXPAND | Gtk::FILL, 10, 10);
    _leftFrame.set_label("my playlist");     //set the label
    _leftFrame.set_label_align(Gtk::ALIGN_START, Gtk::ALIGN_START); // set the position of the label
    _leftFrame.set_shadow_type(Gtk::SHADOW_ETCHED_OUT);             //set the style of the frame

    _box = VBox(false, 10);
    _mainTable.attach(_box,1,6,0,2, Gtk::EXPAND, Gtk::EXPAND, 10, 10);

    _bouton.set_label("exit");
    _box.pack_end(_bouton);
    _bouton.signal_clicked().connect([]() { Gtk::Main::quit(); });
}


void MyWindow::update(MultimediaApi m)
{
    _playlist.set_label(m.getBibli());
    _leftFrame.add(_playlist);
}
