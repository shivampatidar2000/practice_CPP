#include<iostream>
using namespace std;

int main()
{
    struct car {
        int year ;
         string model;
         string brand;
    };

    car myCar1 ;
    myCar1.year = 2012;
    myCar1.model = "X5";
    myCar1.brand = "BMW";

    cout<<myCar1.year<< " "<<myCar1.model<< " " <<myCar1.brand<<"\n ";
}