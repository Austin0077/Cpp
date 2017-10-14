#include "sum1.h"
#include<iostream>
using namespace std;

void sum::getsum()
{
	int sum=0;
	for (int i=1;i<=100;i++)
		sum+i;

	cout<<"The sum is: "<<sum<<endl;
}
