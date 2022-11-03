#include<iostream>
using namespace std;

class Complex
{
  int a; int b;
  public:
  void setdata(int a1 ,int a2)
  {
   a = a1;
   b = a2;
  }
  void getdata(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
  }
};

int main()
{
//    using pointer in object;

//    Complex c1;
//    Complex *ptr = &c1;
//    (*ptr).setdata(4,6);
//    (*ptr).getdata();

//  using new operator in pointer 
// using arrow operator (->)
 Complex *ptr = new Complex;
 ptr->setdata(43,6);
 ptr->getdata();

//  using array of pointer in object 
// int a ,b;
// cout<<"Enter the a "<<endl;
// cin>>a;
// cout<<"Enter the b "<<endl;
// cin>>b;
 Complex *ptr1 = new Complex[3];
 for(int i=0; i<3 ;i++)
 {
    int a ,b;
cout<<"Enter the a "<<endl;
cin>>a;
cout<<"Enter the b "<<endl;
cin>>b;
 ptr1->setdata(a,b);
 ptr1->getdata();

 }

 
   return 0;
}