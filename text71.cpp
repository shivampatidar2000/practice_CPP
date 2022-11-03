#include<iostream>
using namespace std;

int main()
{
//  Basic of Pointer 
 int a = 8;
 int *ptr = &a;
  cout<<"The value of a is "<<a<<endl;
  cout<<"The value of ptr is "<<*ptr<<endl;
  cout<<"The address of a is "<<&a<<endl;

  // new operator(keyword);
  int *p = new int(20);
  cout<<"The value of *p is "<<*p<<endl; 
  // cout<<"The address of a is "<<&p<<endl;

  int *arr = new int [3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 40;
  // delete[] arr;
 
 //delete operator(keyword)

  cout<<"The value pf arr[a] is "<<arr[0]<<endl;
  cout<<"The value pf arr[a] is "<<arr[1]<<endl;
  cout<<"The value pf arr[a] is "<<arr[2]<<endl;   
  return 0;
}