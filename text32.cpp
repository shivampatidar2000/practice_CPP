#include<iostream>
using namespace std;

int main()
{
  
//   int day = 365 ;
  int year;
  cout<< "Enter the year:";
  cin>>year;

//   if (year%4 == 0)
//   {
//     cout<<year<< " is leap year ";
//   }
//   else if (year%400 ==0)
//   {
//     cout<< year<<" is not leap year ";
//   }
//   else if (year%100 ==0 )
//   {
//     cout<< year<<"is not a leap year ";
//   }
//   else
//   {
//     cout<< year<<"is not a leap year ";
//   }
  if ((year%4 ==0 && year%100 !=0) || (year%400 == 0))

  cout<<year<<" is a leap year "<<endl;

  else
  cout<<year<< " is not a leap year ";
  return 0;
}