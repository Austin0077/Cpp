#include <iostream>
#include <string>
#include"student.h"

using namespace std;


student::enteradm(int adm)
{
    stdid=adm;
}
student::entername(string N)
{
    name=N;
}
student::setaverage(string avr)
{
    average=avr;
}
student::display()
{
    cout<<"Name is: "<<name<<endl;
    cout<<"Adm_No : "<<stdid<<endl;
    cout<<"Grade  : "<<average<<endl;
}
