#include<iostream>
#include<fstream>


/*
The Useful classes for working  with files in C++ are:
1. fstreambase
2. istream --> Derived form fstreambase 
3. ofstream -->Derived form fstreambase

// In order work with file in C++, you will have to open it. They are two way to open a file:
// 1. using constructor
// 2. using the member function open() of the class 
*/
using namespace std;
int main()
{
    // string st = "Ram is god of The world ";
    string st1;
    // Opening file using constructor and writing it
    // ofstream out("sample.txt"); //write operation 
    // out<<st;
    
    //opening file using constructor and read it
    ifstream in("sample.txt"); //reading operation
    // in>>st1;
    getline(in , st1);
    // getline(in , st1);
    cout<<st1;
  return 0;
}