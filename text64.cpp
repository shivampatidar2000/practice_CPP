#include<iostream>
using namespace std;

// multiple inheritane

// first base class
class Base1
{
 protected:
  int base1int;
  public:
  void set_base1int(int);
};
void Base1 :: set_base1int(int a)
{
  base1int = a;
}

// second base class
class Base2
{
protected:
  int base2int;
  public:
  void set_base2int(int);
};
void Base2 :: set_base2int(int b)
{
    base2int = b;
}

// derived form first and second base 
class Derived : public Base1 , public Base2
{
  public:
  void show()
  {
    cout<<"The value of the base1int is "<<base1int<<endl;
    cout<<"The value of the base2int is "<<base2int<<endl;
    cout<<"The sum of the base1int and base2int is "<<base1int + base2int <<endl;

  }
};

// all of the multiple inheritance example
int main()
{
  Derived ramu;
  ramu.set_base1int(21);
  ramu.set_base2int(79);
  ramu.show();
  return 0;
}