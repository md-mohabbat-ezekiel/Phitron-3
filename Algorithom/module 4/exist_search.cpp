#include<bits/stdc++.h>
using namespace std;
int binary_search(const vector<int>& a, int t) 
{

int l = 0;
int r = a.size() - 1;
while (l <= r) 
{
int mid = l + (r - l) / 2;
if (a[mid] == t) return mid;

else if (a[mid] < t) 
{
l = mid + 1;
}

else 
{
r = mid - 1;
}

}
return -1; 
}

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
    cin >> a[i];
    }

    int k;
    cin >> k;
    int index = binary_search(a,k);
    if (index != -1) 
    {
    cout << index << endl;
    } 
    else 
    {
    cout << "Not Found" << endl;
    }

    return 0;
}
