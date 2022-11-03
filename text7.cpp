#include<iostream>
using namespace std;
int revers_num(int var , int revers = 0)
{
  
    while(var!=0)
    {
        
        revers = revers*10 + var%10;
        var = var/10;
    }
     cout<<"after revers the value "<<revers<<endl;
};

int main()
{ 
    int var = 12345 ;
    int revers;
    // cout<<"Enter the number ";
    //  cin>>var;

     cout<< "Before rever the value"<<var<<endl;
     revers_num(var , revers);
         return 0;
}