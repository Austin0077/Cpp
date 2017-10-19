#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    int adm=12483;
    string N;
    double avr=45;
    student qweyu;
    qweyu.enteradm(adm);
    qweyu.entername(N);
    qweyu.setaverage(avr);
    qweyu.display();
    cout << "Hello world!" << endl;
    return 0;
}
