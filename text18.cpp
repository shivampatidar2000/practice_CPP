#include<iostream>
using namespace std;

  void sumd(char s[])
  {
   
  }

int main()
{
   string ram =  "'ENGINEER IS A GOOD'";
   string rams =  "'Enginner is a good'";


  cout<<"The value is after lowercase "<<ram<<endl;
  cout<<"The value is after lowercase "<<rams<<endl;


   for(int i =0; i<ram.length(); i++)
    {
        ram[i] = tolower(ram[i]);
    }
    for(int i =0; i<rams.length(); i++)
    {
      rams[i] = toupper(rams[i]);
    }
  cout<<"The value is before the lowercase is "<<ram<<endl;
  cout<<"The value is before the lowercase is "<<rams<<endl<<endl;

  

  return 0;
}