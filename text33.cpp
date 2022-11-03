#include<iostream>
using namespace std;

int main()
{
  string alpa;
   cout<< "Enter the lphabets ";
   cin>>alpa;

   if ((alpa>="a" && alpa<="z") || (alpa >="A" && alpa <="z"))
   {
     cout<<"This is a Alphabets number "<<endl;
    }
   else 
   {
     cout<< "This is not a Alphabets  May Be 'It are Number or SpecialCharter' "<<endl;
    }
  return 0;
}