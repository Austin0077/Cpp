#include<iostream>

using namespace std;

int main()
{
    int number, a,b,c,d,e,f,g,h;
    cout<<"Enter amount of money in shillings"<<endl;
    cin>>number;
    cout<<"1000:"<<(number/1000)<<endl;
    a=number%1000;
    cout<<"500:"<<(a/500)<<endl;
    b=a%500;
    cout<<"200:"<<(b/200)<<endl;
    c=b%200;
    cout<<"100:"<<(c/100)<<endl;
    d=c%100;
    cout<<"50:"<<(d/50)<<endl;
    e=d%50;
    cout<<"20:"<<(e/20)<<endl;
    f=e%20;
    cout<<"10:"<<(f/10)<<endl;
    g=f%10;
    cout<<"5:"<<(g/5)<<endl;
    h=g%5;
    cout<<"1:"<<(h/1)<<endl;
    return 0;
}
