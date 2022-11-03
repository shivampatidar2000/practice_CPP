#include<iostream>
#include<string.h>

using namespace std;

int main()
{
  string first_name = "Ramlal";
  string last_name = " Patidar";
  cout<<"The concatenate two strings "<< first_name + last_name <<endl;
  cout<<"The concatenate two strings "<< first_name.append( last_name) <<endl;
  cout<<"The length of the first_name is "<<first_name.length()<<endl;
  cout<<"The length of the last_name is "<<last_name.size()<<endl;
//   cout<<"The  string to Lower case "<<strlwr(last_name)<<endl;
//   cout<<"The  string to Lower case "<<strlwr(last_name)<<endl;




  return 0;
}