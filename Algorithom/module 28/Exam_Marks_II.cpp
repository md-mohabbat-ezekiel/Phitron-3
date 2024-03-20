#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1001;
const int MAX_SUM = 1001;

bool canObtainPerfectScore(int N, int M, vector<int>& marks) 
{
  bool dp[MAX_N][MAX_SUM];
  memset(dp, false, sizeof(dp));
  for (int i = 0; i <= N; i++) 
  {
   dp[i][0] = true;
  }

  for (int i = 1; i <= N; i++) 
  {
     for (int j = 1; j <= M; j++) 
     {
        if (marks[i - 1] > j) 
        {
            dp[i][j] = dp[i - 1][j];
        } 
        else 
        {
         dp[i][j] = dp[i - 1][j] || dp[i][j - marks[i - 1]];
        }
     }
  }
  return dp[N][M];
}

int main() 
{
 int T;
 cin >> T;

 while (T--) 
 {
    int N, M;
    cin >> N >> M;
    vector<int> marks(N);

    for (int i = 0; i < N; i++) 
    {
     cin >> marks[i];
    }

    if (canObtainPerfectScore(N, 1000 - M, marks)) 
    {
      cout << "YES" << endl;
    } 
    else 
    {
      cout << "NO" << endl;
    }
 }

return 0;
}

