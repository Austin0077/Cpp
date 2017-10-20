#include<iostream>
#include <string>
#include "customer.h"

using namespace std;

void Customer::setid(int x)
{
    Id=x;
}
void Customer::setFname(string name1)
{
    Fname=name1;
}
void Customer::setSname(string name2)
{
    Sname=name2;
}
void Customer::setCredit(double limit)
{
    if (limit<10000)
    {
        Credit=limit;
    }
    else
        Credit=10000;
}
void Customer::Display()
{
    cout<<"ID_No:"<<Id<<endl;
    cout<<"First Name :"<<Fname<<endl;
    cout<<"Last Name :"<<Sname<<endl;
    cout<<"Loan Limit :"<<Credit<<endl;
}
