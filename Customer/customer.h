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
    void setid(int);
    void setFname(string);
    void setSname(string);
    void setCredit(double);
    void Display();
};
