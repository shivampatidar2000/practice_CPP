
#include<iostream>
using namespace std;


class Solution {
  public:
    int solve(int N) {
        // code here
        
        if(N!=0)
        {
            cout<<N/2<<endl;
        }
        else if(N==1)
         {
            cout<<(N+1)/2;
         }
        return N;
    }
};
int main()
{
 int t;
  cin>>t;
  while(t--){
    int N;
    cin>>N;
    Solution obj;
    int rse = obj.solve(N);
    cout<<rse<<endl;
  }
  return 0;
}