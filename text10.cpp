
// Write a program that, given an array A[] of n numbers and another number x, 
// determines whether or not there exist two elements in A[] whose sum is exactly x. 

#include<iostream>
using namespace std;
 
 bool chkPair(int A[] , int size , int x)

{ 
	for(int i = 0;i < (size-1); i++)
	{
		for(int j = (i + 1); j<size; j++)
		{
			if (A[i] + A[j] == x)
			{
				cout<< "Pair with a given sum " << x << + 
				" is (" <<A[i]<< ", "<<A[j]<<")"<<endl; ;
				return 1;
			}
		}
	}
  return 0;
}
int main()
{  
	int A[] = { 0, -1, 2, -3, 1};
	int x =-3;
	int size = sizeof(A)/sizeof(A[0]);

	if(chkPair(A,size,x))
	{
		cout<<"Valid pair exists "<<endl;
	}
  else
	{
		cout<<"Valid pair is not exists "<<x<<endl;     
	}
	return 0;
}