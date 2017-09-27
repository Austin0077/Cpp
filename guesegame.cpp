#include<iostream>

using namespace std;

int main()
{
    int times, total=0,luckynum,x, numb=0,secret,result;

    cout<<"WELCOME! Enter the number of times you wish to play"<<endl;
    cin>>times;

    while(numb<times)
    {
        numb++;
        cout<<"Enter your lucky number "<<numb<<endl;
        cin>>luckynum;

        result=luckynum%secret;
        x=result%2;
        if(result==0)
        {
            cout<<"A Draw"<<endl;
            total++;
        }
        else
        {
            if(x==0)//x can either be a zero or a one depending on the remeinder
            {
                cout<<"A win"<<endl;
                total=+3;
            }
            else
            {
                cout<<"a lose"<<endl;
                total=-1;
            }
        }
    }
    cout<<"Your Total is: "<<total<<endl;
    if (total >0)
    {
        cout<<"You WIN"<<endl;
    }
    else{cout<<"You LOSE";
    }
    return 0;
}
