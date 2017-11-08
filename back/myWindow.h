#ifndef MYWINDOW_H
#define MYWINDOW_H

#include "multimediaApi.h"
#include <gtkmm-3.0/gtkmm/main.h>
#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/button.h>
#include <gtkmm-3.0/gtkmm/box.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/frame.h>
#include <gtkmm-3.0/gtkmm/table.h>

using namespace Gtk;

class MyWindow
{
    public:
        MyWindow();
        void initWindow(MultimediaApi m);
        void createContainers();
        void update(MultimediaApi m);
        void run_window(MultimediaApi m);

    protected:
    //child widgets
        Main   _app;
        Window _fenetre;
        Table  _mainTable;
        Frame  _leftFrame;
        VBox   _box;
        Label  _playlist;
        Button _bouton;

};

#endif // MYWINDOW_H
