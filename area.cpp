#include<iostream>
#define pie 3.14
using namespace std;
double area(double r)
{
	return(pie*r*r);
}
int main()
{
	double radius=3;
	cout<<"Area of the circle is:"<<area(3)<<endl;
	return 0;
}