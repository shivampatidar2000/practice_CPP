#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //connecting our file with sout stream
  ofstream sout("sample.txt");
  //create a name string and filling it with the string entered by the user
   string name , enter;
  //writing a string to the file 
  cout<<"Enter your name ";
  cin>>name;
  sout<<name<<" is my name";
  sout.close();

//   ofstream scon("sampleA.txt");
//   cout<<"Enter your name ";
//   cin>>enter;
//   scon<<enter<<" is your name ";
//   scon.close();

// create a come string and read the file in user
  string come;
    //connecting our file with sin stream
  ifstream sin("sample.txt");
//   sin>>come;
   getline(sin , come);
  cout<<come;
  sin.close();
  return 0;
}