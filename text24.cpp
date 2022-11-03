#include<iostream>
using namespace std;

int isPrime(int n)
{
    for(int i =0; i*i<10000; i++)
    {
        if(n % i == 0)

        return 0;
    }
    return 1;
};

int main()
{
  isPrime(15);
  return 0;
}