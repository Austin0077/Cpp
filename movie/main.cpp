#include <iostream>
#include <string>
#include "movie.h"

using namespace std;

int main()
{
    string t="MMU",d="VCC";
    int y=2014;
    movie mymovie;
    mymovie.settitle(t);
    mymovie.setyear(y);
    mymovie.setdirector(d);
    mymovie.display();
    return 0;
}
