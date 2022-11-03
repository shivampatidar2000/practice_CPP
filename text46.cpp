#include<iostream>
#include<vector>
#include <numeric>
using namespace std;

int simpleArraySum(vector<int> ar) {
 int initial_sum = 0;
   return accumulate(ar.begin(), ar.end(), initial_sum);
    return 0;
};
int main()
{
    vector<int> ar{1, 2, 3, 4, 10, 11};
    int sum = 0;
    sum = accumulate(ar.begin(), ar.end(), sum);
    cout<<"The sum of the ar is "<<sum;
      return 0;
}