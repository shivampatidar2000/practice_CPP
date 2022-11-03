#include<iostream>
using namespace std;

class A{
    int a;
    int b; 
    public:
    A(int a1 , int b1)
    {
        // a = 10;
        // b = 20;
       a = a1;
       b = b1;
    }
    A(void)
    {
        cout<<" Hello programmer this is shivam here inside side "<<endl;
    }
    void printdata()
    {
        cout<<"The value of a "<<a<<" and b is "<<b<<endl;
    }
};
int main()
{
//   A::A,
  A c1(4,6);
  c1.printdata();
  A c2;
  return 0;
}