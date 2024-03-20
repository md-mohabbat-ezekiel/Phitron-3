#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int>mp;
  mp.insert({"sakib",95});
  mp.insert({"rakib",65});
  mp.insert({"akik",75});
  mp.insert({"kakib",85});
  cout<<mp["kakib"]<<endl;
  if(mp.count("akik"))
  {
  cout<<"ase"<<endl;
  }
  else cout<<"nai"<<endl;
  for(auto it=mp.begin(); it!=mp.end();it++)
  {
  cout<<it->first<<" "<<it->second<< endl;
  }
return 0;
}