#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num1,num2,num3;
    float answer;
    char s3;
    s3='y';
    do
    {
        cout<<"*******MENU**********\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus"<<endl;
        cout<<"Enter your Choice"<<endl;
        cin>>num1;
        cout<<"Enter your two numbers:"<<endl;
        cin>>num2>>num3;
        switch (num1)
        {
        case 1:
           answer= num2+num3;
           cout<<"Result: "<<answer<<endl;
           break;
        case 2:
            answer=num2-num3;
            cout<<"Result: "<<answer<<endl;
            break;
        case 3:
            answer=num2*num3;
            cout<<"Result: "<<answer<<endl;
            break;
        case 4:
            answer=num2/num3;
            cout<<"Result: "<<answer<<endl;
            break;
        case 5:
            answer=num2%num3;
            cout<<"Result: "<<answer<<endl;
            break;
        default:
            cout<<"Invalid Entry! Please try again"<<endl;
        }

        cout<<"Continue? (y to continue n to exit)  ";
        cin>>s3;
    }while(s3 =='y');
return 0;
}
