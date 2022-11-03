#include<iostream>
using namespace std;

int main()
{
    int num1 , num2, temp;

    cout<<"Enter the value of num1 ";
    cin>>num1;

    cout<<"Enter the value of num2 ";
    cin>>num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"After swapping values "<<endl;

    cout<<"The value of num1:"<<num1<<endl;    
    cout<<"The value of num2:"<<num2<<endl;
    return 0;
}