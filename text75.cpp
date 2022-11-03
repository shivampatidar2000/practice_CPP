#include<iostream>
using namespace std;
class BaseClass
{
  public:
   int base_var;
   void display()
   {
    cout<<" Desplaying Base class variable var_base "<<base_var<<endl;
   }
};

class DerivedClass : public BaseClass
{
   public:
   int derived_var;
   void display()
   {
    cout<<" Desplaying Base class variable base_var "<<base_var<<endl;
    cout<<" Desplaying Base class variable derived_var "<<derived_var<<endl;
   } 
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass derived_base;
 
    base_class_pointer = &derived_base;
    base_class_pointer->base_var =52;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &derived_base;
    // derived_class_pointer->base_var =21;
    derived_class_pointer->derived_var =212;
    derived_class_pointer->display();
  return 0;
}