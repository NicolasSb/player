#include "multimediaApi.h"
#include "ObjetMulti.h"
#include "audio_file.h"

#include <iostream>
#include <list>

MultimediaApi::MultimediaApi()
{
    list<ObjetMulti*> tmp;
    _data = tmp;
}

MultimediaApi::MultimediaApi(const MultimediaApi& mul)
{
    copy_multi(mul);
}

MultimediaApi::~MultimediaApi()
{
    free_multi();
}

MultimediaApi& MultimediaApi::operator=(const MultimediaApi& mul)
{
    if(this!=&mul)
    {
        free_multi();
        copy_multi(mul);
    }
    return *this;
}

void MultimediaApi::addAudioFile(const string& title, const string& path)
{
    _data.push_back(new audio_file(path, title));
}

void MultimediaApi::deleteAudioFile(const string &title)
{
    for(list<ObjetMulti*>::iterator it = _data.begin(); it != _data.end(); ++it)
    {
        if((*it)->getTitle()==title)
        {
            _data.erase(it);
            break;
        }
    }
}

void MultimediaApi::free_multi()
{
    for(auto &obj: _data)
        delete obj;
}

void MultimediaApi::copy_multi(const MultimediaApi& mul)
{
    audio_file *audio;
    for(auto &obj : mul._data)
    {
        if((audio=dynamic_cast<audio_file*>(obj)) != 0)
            _data.push_back(new audio_file(obj->getPath(), obj->getTitle()));
    }
}

string MultimediaApi::getBibli()
{
    string res = "";
    for(list<ObjetMulti*>::iterator it = _data.begin(); it != _data.end(); ++it)
    {
        res = res + (*it)->getTitle() +"\n";
    }
    return res;
}

int MultimediaApi::getSize() const
{
    return _data.size();
}

