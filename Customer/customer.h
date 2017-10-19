# include<iostream>
#include <string>

using namespace std;

class Customer
{
private:
    int Id;
    string Fname;
    string Sname;
    double Credit;
public:
    void setid();
    void setFname();
    void setSname();
    void setCredit();
    void Display();
};
