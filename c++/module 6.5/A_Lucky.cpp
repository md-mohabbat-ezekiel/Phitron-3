#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        string tic;
        cin >> tic;

        int first = 0;
        int second = 0;

        // Calculate the sum of the first three digits
        for (int i = 0; i < 3; i++)
        {
            first+= tic[i] - '0';
        }

        // Calculate the sum of the last three digits
        for (int i = 3; i < 6; i++) 
        {
            second += tic[i] - '0';
        }

        // Check if the sums are equal
        if (first == second) 
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



