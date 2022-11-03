#include<iostream>
using namespace std;

int main()
{
int marks[100]= {-1 };
   int n;
   cout<<" \n Enter the marks of the students ";
   cin>>n;
//   marks[0] = -1;
//    input
 for(int i = 1; i<=n; i++)
 {
    cin>>marks[i];
 }

  for(int i =0; i<100; i++)
  {
    cout<<marks[i]<<" , ";
  }
    return 0;
}