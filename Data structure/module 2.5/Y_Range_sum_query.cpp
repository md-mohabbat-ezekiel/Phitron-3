#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];
    }

    vector<int> P(N + 1, 0);  // Prefix sum array
    for (int i = 1; i <= N; i++) 
    {
        P[i] = P[i - 1] + A[i - 1];
    }

    while (Q--) 
    {
        int L, R;
        cin >> L >> R;
        int sum = P[R] - P[L - 1];
        cout << sum << endl;
    }

    return 0;
}
