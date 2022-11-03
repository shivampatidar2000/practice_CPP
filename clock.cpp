#include<iostream>
// #include <"data_structures"
// #include<windows.h>
#include<stdio.h>
#include<time.h>
using namespace std;

int main()
{
    int h,m,s;
    int d = 1000; // we add a delay of 1000 milliseconds and we will use it in the function sleep
    cout<<"Set Time "<<endl;
    cin>>h,m,s;
    if(h>12 || m>60 || s>60)
   {
    cout<<"ERROR !"<<endl;
    exit(0);
   }
   while(1) //This is an infinite loup anything inside will repeat itself to infinity
   {
    s++;
    if(s>59)
    {
        m++;
        s=0;
    }
    if(m>59)
    {
      h++;
      m =0;
    }
    if(h>12)
    {
        h=1;
    }
    cout<<"\nClock : ";
    printf("\n %02d:%02d:%02d",h,m,s);
    // cout<<h,m,s; //this writes our time in this format 00:00:00
    Sleep(d);
    system("cls");
   } 

  return 0;
}