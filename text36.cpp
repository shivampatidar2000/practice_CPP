#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b,int c,int d){

  if(a>=d && a>=d)
  {
   cout<<a<<"\n is the large number of num1 "<<endl;
  }
  else if(b>=a && b>=d)
  {
    cout<<b<<"\n is the large number of num2 "<<endl;
  }
   else if(c>=a && c>=d)
  {
    cout<<c<<"\n is the large number of num2 "<<endl;
  }
  else if(d>=a && d >= b && d>=c)
  {
    cout<<d<< "\n is the large number of num3 "<<endl;
  }
}
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<( ans);
    
    return 0;
}