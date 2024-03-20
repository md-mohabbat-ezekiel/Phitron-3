#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_map<char, int> solved;
        int balloons = 0;

        for (int i = 0; i < n; i++) 
        {
            char problem = s[i];
            solved[problem]++;

            if (solved[problem] == 1) 
            {
                // First team to solve the problem gets an additional balloon
                balloons += 2;
            } 
            else 
            {
                balloons++;
            }
           
        }

        cout << balloons << endl;
    }

    return 0;
}
