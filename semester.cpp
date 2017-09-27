#include<iostream>

using namespace std;

int main()
{
    int meals;
    do{
        cout<<"Enter number of meals you want per day\n 6 to Exit"<<endl;
        cin>>meals;
        if (meals==0)
            cout<<"You would pay:"<<300<<endl;
        else if (meals==1)
            cout<<"You would pay:"<<450<<endl;
        else if (meals==2)
            cout<<"You would pay:"<<520<<endl;
        else if (meals==3)
            cout<<"You would pay:"<<590<<endl;
        else
            cout<<"We Do not offer "<<meals<<"meals per day"<<endl;
    }while(meals < 5);
    return 0;

}
