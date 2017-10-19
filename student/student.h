#include<iostream>
#include<string>

using namespace std;
class student
{
private:
    int stdid;
    string name;
    double average;
public:
    void display();
    string entername(string);
    int enteradm(int);
    double setaverage(double);
};
