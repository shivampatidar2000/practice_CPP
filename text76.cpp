#include<iostream>
using namespace std;

class BaseClass
{
    public: 
    int var_base=10;
    virtual void display()
    {
        cout<<"1 Displaying variable for BaseClass var base "<<var_base<<endl;
    }
};

class DerivedClass :  public BaseClass

{
    public:
    int var_derived = 40;
    void display()
    {
        cout<<"3 Displaying variable for DerivedClass var base "<<var_base<<endl;
        cout<<"2 Displaying variable for DerivedClass var Derived "<<var_derived<<endl;
        
    }
};

int main()
{
  BaseClass *base_class_pointer;
  BaseClass obj_base;
  DerivedClass obj_derived;
  
  base_class_pointer= &obj_derived;
  base_class_pointer->display();
  return 0;
}