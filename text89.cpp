#include<iostream>
using namespace std;
/*
syntex of mulatiple parametor of template
  template<class T1 , class T2>
  class className
  {
    body
  }
*/
template<class T1,class T2>

class MyClass
{
 T1 data1; 
 T2 data2;
 public:
 MyClass(T1 a, T2 b)
 {
    data1 = a;
    data2 = b;
 }
  void Display()
  {
    cout<<data1<<endl<<data2<<endl;
  }
};
int main()
{
  MyClass<int, float> obj(3,7.7);
  obj.Display();
  return 0;
}