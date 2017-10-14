#include <iostream>
#include <string>

using namespace std;

class movie
{
private:
    string title;
    int year;
    string director;
public:
    void settitle(string);
    void setyear(int);
    void setdirector(string);
    void display();
};
