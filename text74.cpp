#include<iostream>
using namespace std;

class A
{
    int age;
    public:
    void setdata(int age)
    {
        this->age = age;
    }
    // A& setdata(int age)
    // {
    //    this->age = age;
    //    return *this;
    // }
    void getdata()
    {
        cout<<"The age is "<<age<<endl;
    }
};
int main()
{
   A a;
   a.setdata(44);
   a.getdata();
  return 0;
}