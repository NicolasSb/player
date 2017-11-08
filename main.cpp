#include <iostream>
#include <list>
#include "back/multimediaApi.h"
#include "back/myWindow.h"

#include <gtkmm-3.0/gtkmm/main.h>
#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/button.h>
#include <gtkmm-3.0/gtkmm/box.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/frame.h>
#include <gtkmm-3.0/gtkmm/table.h>



int main(int argc, char **argv)
{
    string path = "test_path";
    string title = "test_title";
    string &p = path, &t = title;
    MultimediaApi m;
    m.addAudioFile(p, t);
    m.addAudioFile("bla", "blabla");



    MyWindow window;
    window.run_window(m);

    return 0;
}
