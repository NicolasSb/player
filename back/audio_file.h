#ifndef AUDIO_FILE_H
#define AUDIO_FILE_H

#include "ObjetMulti.h"
#include <string>

using namespace std;

class audio_file: public ObjetMulti
{
    public:
        audio_file();
        audio_file(string, string);
        virtual void display()const;
        virtual void play()const;
};

#endif // AUDIO_FILE_H
