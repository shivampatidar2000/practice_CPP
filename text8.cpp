#include<iostream>
using namespace std;
int search(int arr[], int size ,int n)
{
    size--;
    int a = 0;
    if(size< 0)
    {
        return -1 ;
    }
    if(arr[size]==n )
    {
        return size;
    }
     return search(arr,size, n );
}

int main()
{   
    int arr[]= {21,32,12,43,43};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n =17 ;
    // int size;
    int idx = search(arr,size,n);
   if(idx != -111)
   {
    cout<<"Element"<<n<<" present in the index "<<idx<<endl;
   }
   else 
   {
    cout<<"Element "<<n<<" It is not present "<<endl;
   }
 
    return 0;
}