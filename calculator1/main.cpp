#include <iostream>
#include <string>
#include "calc.h"

using namespace std;

int main()
{
    calculator austin;
    char a='y';
    int z,x,y;
    do
    {
      austin.setnum3(z);
      austin.setnum12(x,y);
      austin.display();
      cout<<"Continue? (y to continue n to exit)"<<endl;
      cin>>a;
    }while(a=='y');

    return 0;
}
