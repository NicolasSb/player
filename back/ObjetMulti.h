#ifndef OBJETMULTI_H
#define OBJETMULTI_H

#include <string>
#include <cstring>

using namespace std;

class ObjetMulti
{
protected:
    string _path;
    string _title;
    ObjetMulti();
    ObjetMulti(string, string);

public:
    inline string getTitle() const;
    inline string getPath() const;
    inline void setTitle(const string);
    inline void setPath(const string);
    virtual void display() const;
    virtual void play() const = 0;
};

#endif // OBJETMULTI_H
