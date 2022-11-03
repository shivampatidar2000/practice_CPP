#include<iostream>
#include<cstring>
using namespace std;

int main()
{
   char str1[1000], str2[1000];

   cout<<"Enter the str1 ";
   cin>>str1;

   cout<<"Enter the str2 ";
   cin>>str2;
   if (strcmp(str1,str2) == 0 )
   {
    cout<<"entered string are equal "<<endl;
   }
   else
   {
    cout<<"Entered string are not equal "<<endl;
   }
  return 0;
}