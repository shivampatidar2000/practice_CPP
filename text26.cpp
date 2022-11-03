#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

int main()
{
  char string[100];
  int alpa,digits,specialchar,i;

  alpa = digits = specialchar = i = 0;
  cout<<"Enter any string ";
  cin>>string;

  while( string[i]!='\0')
  {
    if( (string[i]>='a' && string[i] <='z') || (string[i]>='Z' && string[i] <='Z'))
    {
       alpa++;
    }
    else if(string[i]>='0' && string[i]<='9')
    {
        digits++;
    }
    else 
    {
     specialchar++;
    }
    i++;
  }
    cout<<" Total Alphabets "<<alpa<<endl;
    cout<<" Total digits "<<digits<<endl;
    cout<<" Total specialchar "<<specialchar<<endl;
  return 0;

}