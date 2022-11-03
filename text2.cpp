#include<iostream>
using namespace std;

int linear_search(int arr[], int key , int n)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
          return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,44,11,12,34,76};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter the key ";
    cin>>key;
     
     int index = linear_search(arr, key, n);
     if(index != -1)
     {
        cout<<key<<"Is present at index "<<index<<endl;
     }
     else
     {
        cout<<"Is not found"<<endl;
     }

    return 0;
}