#include <iostream>

using namespace std;

class grocery_item
{
private:
    int stock_no;
    int price;
    double quantity;
    float total;
    void setstock(int);
    void setprice(int);
    void setqty(double);
    void settotal(float);
public:
    void data_entry();
    void display();
};
