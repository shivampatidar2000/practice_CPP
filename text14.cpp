#include<iostream>
using namespace std;

int main()
{
   int inttype;
   float floattype;
   string stringtype;
   short shorttype;
   char chartype;
   double doubletype;
   
   cout<<"The int size is "<<sizeof(inttype)<<" bytes"<<endl;
   cout<<"The float size is "<<sizeof(floattype)<<" bytes"<<endl;
   cout<<"The string size is "<<sizeof(stringtype)<<" bytes"<<endl;
   cout<<"The short size is "<<sizeof(shorttype)<<" bytes"<<endl;
   cout<<"The char size is "<<sizeof(chartype)<<" bytes"<<endl;
   cout<<"The double size is "<<sizeof(doubletype)<<" bytes"<<endl;


  return 0;
}