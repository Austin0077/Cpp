#include<iostream>
#include<stdlib.h>

using namespace std;


int sec_no,num,x,y,z=1,lucky;
float total;
int input()
{
    cout<<"*******WELCOME********"<<endl;
    cout<<"How many times do you wish to play?"<<endl;
    cin>>num;
    return num;
}
int process(int num)
{
    num=input();
    while(z<=num){
    cout<<"Enter your Lucky Number "<<z<<endl;
    cin>>lucky;
    z++;
    sec_no= rand() % 10 + 1;//secret number is a number between 1 and 10

    x=lucky%sec_no;
    if (x==0)
    {
        total=total+1;
    }
    else
    {
        y=x%5;// The Reminder is tested to determine if its odd or even.
        if (y==0)
            total=total+3;
        else
            total=total-3;
    }
    }
    return total;
}
int output(int total)
{
    cout<<"Total is :"<<total<<endl;
    if (total>0)
        cout<<"You Win"<<endl;
    else
        cout<<"You Lose";
    return 0;
}
int main(int total)
{
    total=process(total);
    output(total);
    return 0;
}
