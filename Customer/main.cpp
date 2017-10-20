#include <iostream>
#include <string>
#include "customer.h"

using namespace std;

int main()
{
    int x;
    double limit;
    string name1,name2;
    cout<<"Enter Your ID"<<endl;
    cin>>x;
    cout<<"Enter Your First Name:"<<endl;
    cin>>name1;
    cout<<"Enter Your Second name:"<<endl;
    cin>>name2;
    cout<<"Loan Needed"<<endl;
    cin>>limit;

    Customer Miriam;
    Miriam.setid(x);
    Miriam.setFname(name1);
    Miriam.setSname(name2);
    Miriam.setCredit(limit);
    Miriam.Display();
    return 0;
}
