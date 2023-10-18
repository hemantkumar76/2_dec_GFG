#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
class Solution
{
public:
    int isItPossible(string S, string T, int M, int N)
  {
    // write code here 
    
  }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
