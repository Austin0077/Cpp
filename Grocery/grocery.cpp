#include<iostream>
#include "grocery.h"

using namespace std;

void grocery_item::setstock(int x)
{
    cout<<"Enter Stock Number(between 1000-10000):"<<endl;
    cin>>x;

    if((x>=1000)&&(x<10000)){
        stock_no=x;}
    else
        {
      while((x<=1000)||(x>10000)){
            cout<<"Enter Stock Number(between 1000-10000):"<<endl;
            cin>>x;
        }
        stock_no=x;
        }
}
void grocery_item::setprice(int y)
{
    cout<<"Enter Stock_Price(Not less than 0):"<<endl;
    cin>>y;
     if(y>=0)
        price=y;
    else{
        while(y<0){
            cout<<"Enter Stock Price:"<<endl;
            cin>>y;
            price=y;
            }
    }
}
void grocery_item::setqty(double z)
{
    cout<<"Enter Stock Quantity:"<<endl;
    cin>>z;
    if(z>=0)
        quantity=z;
    else{
        while(z<0){
            cout<<"Enter Stock Quantity"<<endl;
            cin>>z;
            quantity=z;}
    }
}
void grocery_item::settotal(float a)
{
    a=price*quantity;
    total=a;
}
void grocery_item::data_entry()
{
    int x;
    int y;
    double z;
    float a;
    grocery_item spinach;
    spinach.setstock(x);
    spinach.setprice(y);
    spinach.setqty(z);
    spinach.settotal(a);
    spinach.display();

}
void grocery_item::display()
{
    cout<<"Stock number: "<<stock_no<<endl;
    cout<<"Stock Price: "<<price<<endl;
    cout<<"Quantity: "<<quantity<<endl;
    cout<<"Total : "<<total<<endl;
}
