#include<iostream>
using namespace std;
 
 int fun1(int array[], int length)
 {
    int sum = 0;
    int product  = 1;
    for( int i = 0; i<length ;i++)
    {
    //   sum += array[i];
      cout<<sum<<endl;
    }

    for(int j = 0; j<length ;j++) 
    {
     product *=array[j];
     cout<<product<<endl;
    }
 }
int main()
{ 
   int arr[] = {3,5,66};
   fun1(arr,3);
//    cout<<"product"<<sum;
    return 0;
}