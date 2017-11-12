#include<iostream>
#include<string>
#include "calc.h"

using namespace std;

void calculator::setnum12(int x,int y)
{
    cout<<"Enter Your two numbers: "<<endl;
    cin>>x>>y;
    num1=x;
    num2=y;
}
void calculator::setnum3(int z)
{
    cout<<"******************MENU******************\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus"<<endl;
    cout<<"Enter Your choice"<<endl;
    cin>>z;
    num3=z;
}
void calculator::display()
{
   float answer;
    switch (num3)
        {
        case 1:
           answer= num2+num3;
           cout<<"Result: "<<answer<<endl;
           break;
        case 2:
            answer=num2-num3;
            cout<<"Result: "<<answer<<endl;
            break;
        case 3:
            answer=num2*num3;
            cout<<"Result: "<<answer<<endl;
            break;
        case 4:
            answer=num2/num3;
            cout<<"Result: "<<answer<<endl;
            break;
        case 5:
            answer=num2%num3;
            cout<<"Result: "<<answer<<endl;
            break;
        default:
            cout<<"Invalid Entry! Please try again"<<endl;
        }
}
