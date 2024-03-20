#include<bits/stdc++.h>
using namespace std;
// Define a custom comparator function
bool com_edg(pair<int,int>a, pair<int, int>b) 
{
 if (a.first == b.first) 
 {
  return a.second < b.second;
 }
return a.first < b.first;
}

int main() 
{
int e;
cin>>e;
vector<pair<int,int>> edg;

for (int i = 0; i < e; i++) 
{
 int a,b;
 cin >>a>>b;
 edg.push_back({a,b});
}

sort(edg.begin(), edg.end(), com_edg);
for (int i=0;i<e;i++) 
{
 cout<<edg[i].first <<" "<<edg[i].second<<endl;
}

    return 0;
}
