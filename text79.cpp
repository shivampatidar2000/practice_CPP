#include<iostream>
using namespace std;

int main()
{
 int a,b,c;
 cout<<"Enter number of a , b , c\n";
 cin>>a>>b>>c;

 if(a>b)
 {
    if(a>c)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
 }
 else
 {
    if(b>c)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
 }

  int n;
  cin>>n;
  if(n%2==0)
  {
    cout<<"Even"<<endl;
  }
  else
  {
    cout<<"Odd"<<endl;
  }
  return 0;
}