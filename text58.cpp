#include<iostream>
using namespace std;
class Number
{
  int a;
  public:
  Number(){ a = 0;}
  Number(int a1)
  {
    a=a1;
  }
  Number(Number &obj)
  {
    cout<<"Copy constructor is called!!! "<<endl;
    a = obj.a;
  }
  void display(void)
  {
    cout<<"The value of a is "<<a<<endl;
  }
};
int main()
{
  Number x , y(43) , z;
   x.display();

   y.display();

   z.display();

   Number y1 = y;
   y1.display();
   Number y2(x);
   y2.display();
  return 0;
}