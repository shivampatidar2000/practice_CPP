#include<iostream>
using namespace std;


/*
case1:
class B: public A{
   Order of Execution of constructor -> first(A),second(B)
}

case2:
class c : public A, public B{
    order of exection of constructor -> first(A), second(B) than third(C)
}

case3:
class c : public A, virtual public B{
    order of exection of constructor -> first(B), second(A) than third(C)
}
*/
class Base1
{
    int data1;
    public:
    Base1(int i)
    {
        data1 = i;
        cout<<"Constructor  Base1 is called "<<endl;
    }
    void printDataBase1()
    {
        cout<<"The value of Base1 is "<<data1<<endl;
    }
};
class Base2
{
    int data2;
    public:
    Base2(int j){
        data2 = j;
        cout<<"Constructor  Base2 is called "<<endl;

    }
    void printDataBase2()
    {
        cout<<"The value of Base2 is "<<data2<<endl;
    }

};

class Derived : public Base1 , public Base2
{
  int derived1, derived2;
  public:
  Derived(int a, int b, int c ,int d) : Base1(a), Base2(b)
  {
    derived1 = c;
    derived2= d;
  }
  void printDataDerived()
    {
        cout<<"The value of Derived1 is "<<derived1<<endl;
        cout<<"The value of Derived2 is "<<derived2<<endl;
    }

};
int main()
{
    Derived shiv(3,5,7,9);
    shiv.printDataBase1();
    shiv.printDataBase2();
    shiv.printDataDerived();

  return 0;
}