#include<iostream>
using namespace std;
 
 int large(int arr[], int n=0)
 {
    int sum = arr[0];
     for(int i =1 ; i<n ;i++)
     {
        if(arr[i] > sum)
        {
            sum += arr[i];
        }
            return sum;
     }
 };
 int main()
{
   int arr[] = {21,34,3,56,78};
   int n = sizeof(arr)/sizeof(arr[0]);

   cout<<"The large value of arr is "<<large(arr, n)<<endl;
}