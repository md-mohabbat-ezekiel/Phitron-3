#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int>mylist={10,20,30,40,50};
  cout<<mylist.max_size()<<endl;
  mylist.clear();
  cout<<mylist.size()<<endl;
  mylist.resize(2);
  mylist.resize(3,100);
  cout<<mylist.size()<<endl;
  for(int val:mylist)
  {
  cout<<val<<endl;
  }
return 0;
}