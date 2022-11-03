#include<iostream>
using namespace std;

int count=0;
class Num
{
   public:
   Num()
   {
    count++;
    cout<<"This is the time when constructor is called for object number "<<endl;
   }
   ~Num()
   {
    cout<<"This is the time when Distructor is called for object number "<<endl;
    count--;
   }
};
int main()
{
  cout<<"we are inside our main funcion \n";
  cout<<"Creating first object creating \n";

  Num n1;
  {
    cout<<" Entering this Block "<<endl;
    cout<<"Creating two more objects "<<endl; 
    Num n2,n3;
    cout<<"Exiting This block"<<endl;
  }
  cout<<"Back to main"<<endl;
  return 0;
}