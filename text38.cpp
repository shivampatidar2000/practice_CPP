#include<iostream>
using namespace std;

int main()
{
  try
  {
    int age = 20;
    if (age >=18 )
    {
        cout << "Accuss Grantend - you age old enough.\n";
    }
    else 
    {
        throw(age);
    }
  }
  catch (int myNum)
  {
    cout << "Access Denied - you must be at least 18 years old \n";
    cout << " Age is: "<< myNum;
  };
  return 0;
}