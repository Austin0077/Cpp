#include<iostream>
#include<string>

#include"dog.h"

using namespace std;

dog::setname(string x)
{
    cout<<"Enter Dog Name"<<endl;
    cin>>x;
    name=x;
}
dog::setage(int y)
{
    cout<<"Enter the Dogs Age"<<endl;
    cin>>y;
    age=y;
}
dog::setbreed(string b)
{
    cout<<"Enter Breed of the Dog"<<endl;
    cin>>b;
    breed=b;
}
dog::display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Breed:"<<breed<<endl;
    cout<<"License fee:"<<fee<<endl;
}
