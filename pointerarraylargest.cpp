#include<iostream>
using namespace std;

int arraysize= 10;
void readarray(int x[])
{
    for (int i= 0;i<arraysize; i++)
    {
        cout<<"Enter a Value"<<endl;
        cin>>x[i];
    }

}
int largest(int *arrayptr)
{
    int maximum;
    maximum=arrayptr[0];

    for (int i = 1;i<arraysize;i++)
    {
        if (arrayptr[i] > maximum)
            maximum=arrayptr[i];
    }
    return maximum;

}
void printarray(int*arrayptr)
{
    for(int i=0;i<arraysize;i++)
    {
        cout<<arrayptr[i]<<",";
    }
}
int main()
{
    int myarray[arraysize];
    readarray(myarray);
    cout<<endl<<"Largest element:";
    cout<<largest(myarray)<<endl;
    cout<<"The elements were"<<endl;
    printarray(myarray);
    return 0;
}
