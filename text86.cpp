#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// template <class t>
// class Vector{
//  int *arr;

// };
int main()
{
    ofstream out; 
   out.open("sampleA.txt");
    out<<"this is good\n";
    out<<"This is not good\n";
    out.close();

    ifstream in;
    string st;
    in.open("sampleA.txt");
    getline(in ,st);
    // getline(in ,st);

    cout<<st<<endl;

  return 0;
}