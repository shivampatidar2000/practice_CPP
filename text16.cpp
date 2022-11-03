#include<iostream>
using namespace std;

int main()
{
  int days ,manths, year, weeks ;
  
  cout<<"Enter the day ";
  cin>>days;

  year = (days/365);
  manths = (days % 365)/12;
  weeks = (days % 365)/7;
  days = days - ((year * 365) + (weeks * 7));

  cout<<"Years"<< year <<endl;
  cout<<"weeks"<< weeks <<endl;
  cout<<"manth"<< manths <<endl;
  cout<<"days"<< days <<endl;

  return 0;
}