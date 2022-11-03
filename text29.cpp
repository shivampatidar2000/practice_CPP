#include<iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  cout<<"Enter the number of num1,num2,num3 ";
  cin>>num1>>num2>>num3;

  if(num1>=num3 && num1>=num3)
  {
   cout<<num1<<"\n is the large number of num1 "<<endl;
  }
  else if(num2>=num1 && num2>=num3)
  {
    cout<<num2<<"\n is the large number of num2 "<<endl;
  }
  else if(num3>=num1 && num3 >= num2)
  {
    cout<<num3<< "\n is the large number of num3 "<<endl;
  }
  return 0;
}