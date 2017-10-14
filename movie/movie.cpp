#include <iostream>
#include "movie.h"


using namespace std;

void movie::settitle(string t)
{
    title=t;
}
void movie::setyear(int y)
{
    year = y;
}
void movie::setdirector(string d)
{

    director=d;
}
void movie::display()
{
    cout<<"Movie Title: "<<title<<endl;
    cout<<"Year of Creation: "<<year<<endl;
    cout<<"Name of Director: "<<director<<endl;
}
