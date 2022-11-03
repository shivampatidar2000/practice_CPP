#include<iostream>
using namespace std;
 
 template<class T> T add(T &a,T &b)
 {
   T result = a + b;
   return result;
 };
int main()
{
 int o = 3,p =  5;
 float x = 3.5 , y = 4.3;
  
  cout<<"addtion of o and p is "<<add(o,p)<<endl;
  cout<<"addtion of x and y is "<<add(x,y)<<endl;

  return 0;
}