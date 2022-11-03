#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
  if(num%3 ==0 || num%5==0)
  {
    cout<<"Number is devided by 3 and 5 "<<endl;
  }
  else 
  cout<<"Number is not devide 3 and 5 "<<endl;
  return 0;
}