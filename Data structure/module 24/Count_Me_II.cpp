#include<bits/stdc++.h>
using namespace std;
int main() 
{
int t;
cin>>t;
while(t--) 
{
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) 
{
cin>>a[i];
}

unordered_map<int, int> count;
int most_occurred= a[0];
int max_count=1;

for(int i=0;i<n;i++) 
{
count[a[i]]++;
if(count[a[i]] > max_count || (count[a[i]] == max_count && a[i] > most_occurred)) 
{
most_occurred = a[i];
max_count = count[a[i]];
}
}
cout<<most_occurred<<" "<< max_count<<endl;
}
return 0;
}

