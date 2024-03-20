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
sort(a.begin(), a.end(),greater<int>());
unordered_set<int> unique;
vector<int>final;

for(int i=0;i<n;i++) 
{
if(unique.find(a[i])==unique.end()) 
{
unique.insert(a[i]);
final.push_back(a[i]);
}
}

for(int i=0;i<final.size();i++) 
{
cout<<final[i]<<" ";
}
cout<<endl;
}

 return 0;
}
