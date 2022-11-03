
#include<iostream>
using namespace std;

int main()
{
  int num1,num2,num3;
  cout<<"Enter the number of num1,num2,num3 ";
  cin>>num1>>num2>>num3;
  
  if(num1>=num2)
  {
        if(num1>=num3)
        {
            cout<<num1<<" num1 is largest number "<<endl;
        }
        else 
        {
            cout<<num3<<" num3 is largest number !"<<endl;
        }
  }
  else {
        if(num2>=num3)
        {
            cout<<num2<<" num2 is largest number "<<endl;
        }
        else
        {
            cout<<num3<<" num3 is largest number "<<endl;
        }
  }
  return 0;
}