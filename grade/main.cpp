#include <iostream>
#include"grading.h"

using namespace std;

int main()
{
    float mark;
    grading grader;
    cout<<"Enter student mark"<<endl;
    cin>>mark;
//   getgrade(mark);
    grader.getgrade(mark);
    grader.display();

    return 0;
}
