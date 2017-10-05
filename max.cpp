#include<iostream>

using namespace std;

int maxnum(int x,int y,int z)
{
    int max=0,min;
    //THis example commented down here can will also work
    /*if ((x>y) && (x >z))
        cout<<"The max_number is"<<x<<endl;
    else if ((y>x)&&(y>z))
        cout<<"The max number is"<<y<<endl;
    else if((z>x) &&(z>y))
        cout<<"The max number is"<<z<<endl;
    else
        cout<<"Two or more numbers inputed are equal"<<endl;
        */

    if (max<x)
        max=x;
    else if (max<y)
        max=y;
    else if (max<z)
        max=z;
    else
        cout<<"No Maximum"<<endl;
    return max;
}
int main()
{
    int x,y,z;
    cout<<"Enter three values"<<endl;
    cin>>x>>y>>z;
    cout<<"The Largest is "<<maxnum(x,y,z);
    return 0;
}
