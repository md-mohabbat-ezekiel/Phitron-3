#include<bits/stdc++.h>
using namespace std;
bool multiple(const vector<int>& a, int t) 
{
int l = 0;
int r = a.size() - 1;
int first = -1;
int last = -1;
   
while (l <= r) 
{
 int mid = l + (r - l) / 2;
 if (a[mid] == t) 
 {
 first= mid;
 r = mid - 1; 
 }
 else if (a[mid] < t) 
 {
 l = mid + 1;
 } 
 else 
 {
 r = mid - 1;
 }
}

l = 0;
r = a.size() - 1;
while (l <= r) 
{
int mid = l + (r - l) / 2;

if (a[mid] == t) 
{
last = mid;
l = mid + 1; 
} 
else if(a[mid] < t) 
{
l = mid + 1;
} 
else 
{
r= mid - 1;
}
}

    return last - first> 0;
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

    if (multiple(a, k)) 
    {
    cout << "YES" << endl;
    } 
    else 
    {
    cout << "NO" << endl;
    }

    return 0;
}
