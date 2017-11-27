#include<iostream>

using namespace std;

int main()
{
    int pin=-1,i;
    cout<<"Please input your secret pin(numeric)"<<endl;
    cin>>pin;
    while(pin<0)
    {

    cout<<"Please input your secret pin(numeric)"<<endl;
    cin>>pin;
    }
    for(i=0;i<1000000000;i++)
    {
        cout<<i<<endl;
        if(i==pin){
            cout<<"Your pin code cracked is: "<<i<<endl;
            break;
        }
    }
    return 0;
}
