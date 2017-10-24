#include "ObjetMulti.h"
#include <iostream>
#include <string>
using namespace std;


ObjetMulti::ObjetMulti(): _path(""), _title("") {}

ObjetMulti::ObjetMulti(string path, string title): _path(path), _title(title) {}

inline string ObjetMulti::getTitle() const
{
    return _title;
}

inline string ObjetMulti::getPath() const
{
    return _path;
}

inline void ObjetMulti::setPath(const string path)
{
    _path = path;
}

inline void ObjetMulti::setTitle(const string title)
{
    _title = title;
}

void ObjetMulti::display() const
{
    cout << _title << endl;
}
