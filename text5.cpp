#include<iostream>
using namespace std;

int suma(int arr[],int n)
{ 
    int sum = 0;
 for(int i = 0 ; i<n;i++)
    sum += arr[i];
    
 return sum;
}
int main()
{
   int arr[4] = {2,4,5,6};
   int n = sizeof(arr)/sizeof(int);
    
    cout<<"sum of givem array is " <<suma(arr,n)<<endl;
    return 0;
}

