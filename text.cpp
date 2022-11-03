#include<iostream>
using namespace std;
 
 void PrintArray(int*arr , int n)
 {

   cout<<"In the Function "<<sizeof(arr)<<endl;
    
     arr[0] = 100 ; 

      for(int i= 0 ; i<n; i++)
      {
        cout<<arr[i]<<endl;
      }
 
 };
 
int main()
{
    int arr[]= {1,2,3,4,5,6}; 
    int n = sizeof(arr)/sizeof(int);

     PrintArray(arr ,n);

    cout<<"In the Main "<<sizeof(arr)<<endl;
      

      for(int i= 0 ; i<n; i++)
      {
        cout<<arr[i]<<endl;
      }

    return 0;
}