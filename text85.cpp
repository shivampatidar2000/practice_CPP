#include<iostream>
using namespace std;
class Employee
{
    protected:
  int id;
  int salary;
  public:
  friend Employee printvalue(Employee x,Employee y);
  void setdata(int a, int b)
  {
  id = a;
  salary = b;
  }
  void getdata();
};
void Employee::getdata()
{
    cout<<"the id of the emplyee is " 
    <<id<<" and salary is "<<salary<<endl;
}
 
  Employee printvalue(Employee x,Employee y)
 {
    
    // cout<<a<<b;
 } 
class Programmer : public Employee
{
   public:
   void setvalue(int o,int p)
   {
    id = o;
    salary = p;
   }
   void print()
   {
    cout<<"Programmer id is "<<id<<" and salary is "<<salary<<endl;
   }
};
int main()
{
    int x ,y,a,b;
    cout<<"Enter the id and salary ";
    cin>>x>>y;
//   Employee ram;
  Programmer ram;
  ram.setdata(x,y);
  ram.getdata();
    cout<<"Enter the id and salary ";
   cin>>a>>b;
  ram.setvalue(a,b);
  ram.print();
  
  return 0;
}