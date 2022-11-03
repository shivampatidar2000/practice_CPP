#include<iostream>
using namespace std;

void geeks()
{
    int var= 20;

    //declare pointer variable 
    int* ptr;
    //note data type of ptr and var must be same
    ptr = &var;

    cout<<"The value of ptr "<<ptr<<endl;
    cout<<"The value of var "<<var<<endl;
    cout<<"The value of *ptr "<<*ptr<<endl; 
    cout<<"The address of var "<<&var<<endl;
}
int main()
{
    geeks();
  return 0;
}