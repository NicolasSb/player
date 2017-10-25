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
    string getTitle() const;
    string getPath() const;
    void setTitle(const string);
    void setPath(const string);
    virtual void display() const;
    virtual void play() const = 0;
};

#endif // OBJETMULTI_H
