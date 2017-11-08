#ifndef MULTIMEDIAAPI_H
#define MULTIMEDIAAPI_H

#include <string>
#include "ObjetMulti.h"
#include <list>

using namespace std;


class MultimediaApi
{
    public:
        MultimediaApi();
        ~MultimediaApi();
        MultimediaApi(const MultimediaApi&);
        MultimediaApi& operator=(const MultimediaApi&);
        void addAudioFile(const string&, const string &);
        void deleteAudioFile(const string&);
        string getBibli();
        int getSize() const;

    private:
        void copy_multi(const MultimediaApi&);
        void free_multi();
        list <ObjetMulti*> _data;
};

#endif // MULTIMEDIAAPI_H
