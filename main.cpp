#include <iostream>
#include "back/multimediaApi.h"

using namespace std;

int main()
{
    string path = "test_path";
    string title = "test_title";
    string &p = path, &t = title;
    MultimediaApi m;
    m.addAudioFile(p, t);
    m.display();
    return 0;
}
