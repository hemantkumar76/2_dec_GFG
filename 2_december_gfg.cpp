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
    int i = 0, j = 0;
        while (i < M && j < N)
        {
            if (S[i] == '#')
            {
                i++;
            }
            else if (T[j] == '#')
            {
                j++;
            }
            else if (S[i] == 'A' && T[j] == 'B')
            {
                return 0;
            }
            else if (S[i] == 'B' && T[j] == 'A')
            {
                return 0;
            }
            else
            {
                i++;
                j++;
            }
        }
        while (i < M)
        {
            if (S[i] != '#')
            {
                return 0;
            }
            i++;
        }
        while (j < N)
        {
            if (T[j] != '#')
            {
                return 0;
            }
            j++;
        }
        return 1;
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
