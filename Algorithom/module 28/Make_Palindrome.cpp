#include<bits/stdc++.h>
using namespace std;
int minAdditionsToMakePalindrome(string s) 
{
  int n = s.length();
  vector<vector<int>> dp(n, vector<int>(n, 0));

  for (int len = 2; len <= n; len++) 
  {
    for (int i = 0; i <= n - len; i++) 
    {
      int j = i + len - 1;  
      if (s[i] == s[j]) 
      {
          dp[i][j] = dp[i + 1][j - 1];
      }
       else 
       {
          dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j - 1]);
       }
    }
  }

  return dp[0][n - 1];
}

int main() 
{
  int T;
  cin >> T;
  cin.ignore();

  while (T--) 
  {
    string S;
    getline(cin, S);

    int minAdditions = minAdditionsToMakePalindrome(S);
    cout << minAdditions << endl;
  }

  return 0;
}
