#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
   ofstream out;
   out.open("sample.txt");
   out<<"This is good\n ";
   out<<"This is not good \n";
   out<<"This will good \n";
   out<<"This have to good \n";
   out<<"This is going to good \n";
   out<<"This have good \n";

   out.close();

   ifstream in;
   string st;
   in.open("sample.txt");
//    in>>st;
//    cout<<st;
while (in.eof() == 0)
 { 
    getline(in , st);
    cout<<st<<endl;
 }
 in.close();
  return 0;
}