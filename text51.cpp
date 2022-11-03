#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    bool isZero(false);
 for(int i = 0 ; i<(s.length()-1); i++)
 {
    if (s[i]== s[i+1])
    {
        s.erase(s.begin()+i);
        s.erase(s.begin()+i);
        if (s.length()==0)
        {
            isZero = true;
            break;
        }
        i =-1;
    }
 }
  if (isZero)
        cout << "Empty String";
    else
        cout << s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

7    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
