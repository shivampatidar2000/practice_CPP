#include<iostream>
using namespace std;
class Complex
{
 int a;
 int b;
 public:
 void setData(int v1 , int v2)
 {
    a =v1;
    b =v2;
 }
 void setDataBySum(Complex o1, Complex o2)
 {
    a = o1.a + o2.a;
    b = o1.b + o2.b;
 }
 void printdata()
 {
    cout<<"Your complex number is "<<a<<" + "<<b<<" i "<<endl; 
 }
};
int main()
{
  Complex c1,c2,c3;
  c1.setData(2,4);
  c1.printdata();

  c2.setData(4,6);
  c2.printdata();
 cout<<"--------------------------------"<<endl;
  c3.setDataBySum(c1,c2);
  c3.printdata();

  return 0;
}