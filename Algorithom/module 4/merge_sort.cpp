#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& a, int l, int mid, int r) 
{
int n1 = mid - l + 1;
int n2 = r - mid;

vector<int> la(n1), ra(n2);

for(int i= 0; i < n1; i++)
la[i] = a[l + i];

for (int j = 0; j < n2; ++j)
ra[j] = a[mid + 1 + j];

int i = 0, j = 0, k = l;

while (i < n1 && j < n2) 
{
if (la[i] >= ra[j])
a[k++] = la[i++];

else
a[k++] = ra[j++];
}

while (i < n1)
    a[k++] = la[i++];

while (j < n2)
    a[k++] = ra[j++];
}

void mergeSort(vector<int>& a, int l, int r) 
{
    if (l >= r) return;

    int mid = l + (r - l) / 2;

    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);

    merge(a, l, mid, r);
}

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) 
    {
    cin >> a[i];
    }

    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; ++i) 
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
