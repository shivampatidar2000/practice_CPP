#include<iostream>
using namespace std;

int main()
{
  int num1 , num2 ,num3 ,largest;

  cout<<"Enter three number ";
  cin>>num1>>num2>>num3;

  largest = num1 >num2 ? (num1 >num3 ? num1:num3) : (num2>num3 ? num2: num3 );
  cout<< largest<<"Is the large number "<<endl; 
   
  return 0;
}