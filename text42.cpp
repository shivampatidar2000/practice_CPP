#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    friend Complex sumcomplex(Complex o1 ,Complex o2);
    void setData(int v1 ,int v2)
    {
        a = v1;
        b = v2;
    }
    void printData()
    {
        cout<<"You number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex sumcomplex(Complex o1 ,Complex o2)
{
   Complex o3;
   o3.setData((o1.a + o2.a), (o1.b + o2.b));
   return o3;
}
int main()
{
  Complex c1 ,c2,sum;
  c1.setData(3,5);
  c1.printData();

  c2.setData(4,6);
  c2.printData();

  sum = sumcomplex(c1 ,c2);
  sum.printData();
  return 0;
}