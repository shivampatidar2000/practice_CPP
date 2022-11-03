#include<iostream>
using namespace std;
 class Employee{
 int id;
 int salary;
  static int count;
 public:
  void setdata()
  {
    salary = 2000;
    cout<<"Enter the id "<<endl;
    cin>>id;
    count++;
  }
  void getdata()
  {
    cout<<" The id of the employee is "<<id<<" and this is employee number "<<count<<endl;
    cout<<"salary "<<salary<<endl;
  }

 };
 int Employee :: count = 1000;
int main()
{
//   Employee ram ,shayam, ghanshyam;
//   ram.setdata();
//   ram.getdata();

//   shayam.setdata();
//   shayam.getdata();

//   ghanshyam.setdata();
//   ghanshyam.getdata();
Employee fb[4];
for (int i=0; i< 4;i++)
{
    fb[i].setdata();
    fb[i].getdata();
}
  return 0;
}