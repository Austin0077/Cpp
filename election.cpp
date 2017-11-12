#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x,vote,vote1=0,vote2=0, vote3=0;
    char yes='Y',no='N',ud='U';
    for (x=0;x<100;x++) //loop 100 times for the 100 students
    {
        cout<<"Will Voting take place on 26th October 2017?"<<endl;
        cout<<"1.Y (Yes voting will take place)\n2.N (No voting will take place)\n3.U (Not sure)"<<endl;
        cin>>vote;
        if((vote<=3)&&(vote>=1))//Entry allowed are 1,2,3;
        {
            if(vote==1)
                vote1++;
            else if(vote==2)
                vote2++;
            else
                vote3++;
        }
        else
        {
            cout<<"Invalid Choice! Try again"<<endl;
            x--;//to ensure the invalid attempt is not counted
        }
    }
    cout<<"Y: "<<vote1<<endl;
    cout<<"N: "<<vote2<<endl;
    cout<<"U: "<<vote3<<endl;
    return 0;
}
