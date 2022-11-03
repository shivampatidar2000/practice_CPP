#include<iostream>
using namespace std;
class C2;
class C1
{
    int var1;
    friend void exchange(C1 &,C2 &);
    public:
    void setdata(int a)
    {
        var1 = a;
    }
    void display(void)
    {
      cout<<var1<<endl;
    }
};

class C2
{
    int var2;
    public:
    void setdata(int b)
    {
      var2 = b;
    }
    void display()
    {
        cout<<var2<<endl;
    }
    friend void exchange(C1 &,C2 &);

};

void exchange(C1 &x, C2 &y)
{
    int tmp = x.var1;
    x.var1 = y.var2;
    y.var2 = tmp;
}
int main()
{
  C1 oc1;
  C2 oc2;
  oc1.setdata(34);
  oc2.setdata(67);
  exchange(oc1,oc2);

  cout<<" The value of c1 After exchanging becomes: ";
  oc1.display();
  cout<<" The value of c2 after exchanging becomes: ";
  oc2.display();
  return 0;
}