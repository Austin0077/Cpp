#include <iostream>
#include "area.h"
using namespace std;

#define pie 3.14

void circle::setradius(float r)
{
     radius=r;
}
void circle::area()
{
    cout<<pie*radius*radius;

}
circle::circle()
{
    radius=0.0;
}
circle::circle(float r)
{
    radius=r;
}
circle::~circle(){}
