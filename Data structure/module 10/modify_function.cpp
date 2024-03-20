#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int>mylist={1,2,3,4,5,10,20,30,40,50};
  list<int>newlist={50,60,70,80,90};
  mylist.push_front(100);
  mylist.pop_front();
  mylist.push_back(200);
  mylist.pop_back();
//   mylist.insert(next(mylist.begin(),2),300);//cycle
  mylist.insert(next(mylist.begin(),2),newlist.begin(),newlist.end());

  mylist.erase(next(mylist.begin(),2));
  mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
  replace(mylist.begin(),mylist.end(),30,400);
//   list<int>newlist;
//   newlist=mylist;
//   newlist.assign(mylist.begin(),mylist.end());
  for(int val:mylist)
  {
  cout<<val<<endl;
  }
  auto it=find(mylist.begin(),mylist.end(),50);
//   cout<<*it<<endl;
if(it==mylist.end())
{
cout<<"not found"<<endl;
}
else
{
cout<<"found"<<endl;
}
return 0;
}