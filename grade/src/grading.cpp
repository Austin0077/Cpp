#include "grading.h"
#include<iostream>

using namespace std;

char grading::getgrade(float mark)
{
    if(mark>=70)
        grade='A';
    else if(mark>=69)
        grade='B';
    else if(mark>=59)
        grade='C';
    else if(mark>=49)
        grade='D';
    else
        grade='E';

    return grade;
}
void grading::display()
{
    cout<<"Your Grade:"<<grade<<endl;
}

/*grading::~grading()
{
    //dtor
}*/
