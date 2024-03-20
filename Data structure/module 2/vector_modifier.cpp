#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> x={10,20,30,40,50};
  vector<int> v={1,2,3,4};
  v=x;//o(n) size differnt
  for(int i=0;i<v.size();i++)
  { 
  cout<<v[i]<<" ";
  }
  cout<<endl;

vector<int> y={10,20,30,40,50};
y.pop_back();//remove the last element;
y.pop_back();
for(int i=0;i<y.size();i++)
{
cout<<y[i]<<" ";
}
cout<<endl;

vector<int> z={1,2,3,4,5};
vector<int>z2={100,200,300};
z.insert(z.begin()+2,z2.begin(),z2.end());//o(n+k);
for(int x:z)
{
cout<<x<<" ";
}
cout<<endl;

vector<int>a={50,60,70,80,90};
a.erase(a.begin()+1,a.begin()+4);//50,90
for(int x:a)
{
cout<<x<<endl;
}

vector<int>b={1,2,3,3,5,6,7,8,8,9};
replace(b.begin(),b.end(),3,100);// not v.replace
for(int x:b)
{
cout<<x<<" ";
}
vector<int> c={1,2,3,4,5,3,4,7,8};
auto it=find(c.begin(),c.end(),3);
if(it==c.end()) cout<<"not found"<<endl;
else cout<<"found"<<endl;
return 0;
}
