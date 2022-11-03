#include<iostream>
using namespace std;

int main()
{
   string str = "And still, I rise";
   
//    reverse(str.begin(), str.end());
  char C;
  for(int index = 0, i = str.length(); index<i/2;index++)
  {
    C = str[index];
    str[index] =str[i-1-index];
    str[i-1-index] = C;
  }
   cout<< str <<endl;
    return 0;
}