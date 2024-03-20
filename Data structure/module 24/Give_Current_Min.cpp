#include<bits/stdc++.h>
using namespace std;
int main() 
{
int n,q;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) 
{
cin>>a[i];
}
multiset<int> s(a.begin(),a.end());
cin>>q;

while(q--) 
{
int c;
cin>>c;

if(c==0) 
{
int x;
cin>>x;
s.insert(x);
cout<<*s.begin()<<endl;
} 

else if(c==1) 
{
 if(s.empty()) 
 {
 cout<<"Empty"<<endl;
 } 

 else
 {
 cout<<*s.begin()<<endl;
 }
} 

else if(c==2) 
{
 if(s.empty()) 
 {
 cout<<"Empty"<<endl;
 } 
  else 
  {
  s.erase(s.begin());
   if (s.empty()) 
   {
   cout<<"Empty"<<endl;
   } 
    else 
    {
    cout<<*s.begin()<<endl;
    }
  }
}
}

    return 0;
}
