#include<iostream>
using namespace std;

class Complex;

class Calculater
{
  public:
  int add(int a, int b)
  {
    return (a + b);
  }
  int sumRealNumber(Complex , Complex);
  int sumCompNumber(Complex , Complex);
  
};
class Complex
{
    int a, b;
    // friend int Calculater :: sumRealNumber(Complex o1, Complex o2);
   friend class Calculater;

    public:
    void setNumber(int n1 ,int n2)
    {
       a = n1;
       b = n2;
    } 
    void printNumber(){
        cout<<"Your value is"<<a<<" + "<<b<<"i"<<endl;
    }
    // friend int Calculater :: sumCompNumber(Complex o1, Complex o2);
};

int Calculater :: sumRealNumber(Complex o1 , Complex o2)
  {
    return ( o1.a + o2.a );
  };
  int Calculater :: sumCompNumber(Complex o1 , Complex o2)
  {
    return ( o1.b + o2.b );
  };

int main()
{
   Complex o1 , o2;
   o1.setNumber(3,4);
   o2.setNumber(5,7);
    Calculater calc ,csl;
   int res = calc.sumRealNumber(o1 , o2);
   cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
   int resa = csl.sumCompNumber(o1, o2);
   cout<<" The sum of the comp part if o1 and o2 is "<<resa<<endl;
  return 0;
}