#include<iostream>
using namespace std;
void geeks()
{
    int val[4]= {21,32,43,12};
    int *ptr;
    ptr = val;
    cout<<"Element of the array are: "<<endl;
    // cout<<ptr[0]<<endl;cout<<ptr[1]<<endl;cout<<ptr[2]<<endl;cout<<ptr[3]<<endl;  
    for(int i =0 ; i<4 ;i++)
    {
        // cout<<ptr[i]<<endl;
        cout<<"The value of ptr "<<ptr<<endl;
        cout<<"The value of *ptr "<<*ptr<<endl;
        ptr++;

    }
    cout<<endl;

}
int main()
{ 
   geeks();
  return 0;
}