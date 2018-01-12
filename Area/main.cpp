#include <iostream>
#include "area.h"


using namespace std;

int main()
{
    circle c1;
    circle c2(8);
    c1.setradius(7.0);
    c2.area();
    return 0;
}
