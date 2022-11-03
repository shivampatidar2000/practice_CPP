#include<iostream>
using namespace std;

class A
{
    protected:
  int a , b;
  public:
  void setdata(int a1 ,int a2)
  {
    a = a1;
    b = a2;
  }
   virtual void display()
  {
    cout<<"Displaying for A class variable a and b "<<a<<" "<<b<<endl;
  }

};
class B
{
  protected:
  int x,y;
  public:
  void setdata(int a3 ,int a4)
  {
    x = a3;
    y = a4;
  }
   void display()
  {
    cout<<"Displaying for B class variable a and b "<<x<<" "<<y<<endl;
  }
};
class C : public A , public B
{

  public:
  void setdata(int a5 ,int a6)
  {
    a = a5;
    b = a6;
  }
  void display()
  {
    cout<<"Displaying for C class variable a and b "<<a<<" "<<b<<endl;
  }
};

int main()
{
   A *a_pointer;
   A a_obj;
   C c_obj;

   B *b_pointer;
   B b_obj;
   C *c_pointer;
   a_pointer = &c_obj;
   b_pointer = &c_obj;

   a_pointer->setdata(3,6);

   a_pointer->display();

   b_pointer->setdata(8,7);

   b_pointer->display();

  return 0;
}