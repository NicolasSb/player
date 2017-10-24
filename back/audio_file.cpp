#include "audio_file.h"

#include <iostream>

using namespace std;


audio_file::audio_file(): ObjetMulti(){}

audio_file::audio_file(string path, string title) : ObjetMulti(path, title){}

void audio_file::display() const
{
    cout << "AUDIO "<<endl;
    ObjetMulti::display();

}

void audio_file::play() const
{
    cout<<"playing"<<endl;
}
