#include<iostream>
using namespace std;
 
 class X{
    int a, b;
    public:
    X( )
    {
        a = 3;
        b = 5;
        cout<<" Hello World "<<endl;
      cout<<" The sum of the number a and b is "<<a+b<<endl;

    }
    void printNumber(void)
    {
      cout<<" The number of a is "<<a<<" and  b is "<<b<<endl;
    }
 };
int main()
{
  X c;
  c.printNumber();
  return 0;
}