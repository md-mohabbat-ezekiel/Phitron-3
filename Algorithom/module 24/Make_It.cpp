#include<bits/stdc++.h>
using namespace std;
bool reach_n(int N) 
{
 queue<int>q;
 unordered_set<int>vis;
 q.push(1);
 while(!q.empty()) 
 {
   int current=q.front();
   q.pop();
   if(current==N)return true;
   int add=current+3;
   int mul=current*2;
   if(add<=N && vis.find(add)==vis.end()) 
   {
     q.push(add);
     vis.insert(add);
   }
   if(mul<=N && vis.find(mul)==vis.end()) 
   {
     q.push(mul);
     vis.insert(mul);
   }
 }
 return false;
}

int main() 
{
  int t;cin>>t;  
  while(t--) 
  {
    int n;
    cin>>n;  
    if(reach_n(n)) 
    {
     cout<<"YES"<<endl;
    } 
    else 
    {
     cout<<"NO"<<endl;
    }
  }
 return 0;
}
