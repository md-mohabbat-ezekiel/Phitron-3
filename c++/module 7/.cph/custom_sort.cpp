#include<bits/stdc++.h>
using namespace std;
class customsort
{
public:
char c;
int cnt;

};

bool cmp(customsort a,customsort b)
{
 if(a.cnt>b.cnt) return true;
  else return false;
}
int main()
{
int n;
cin>>n;
customsort freq[26];
for(int i=0;i<26;i++)
{
  freq[i].c=(i+'a');
  freq[i].cnt=0;
}

// for(int i=0;i<26;i++)
// {
//  cout<<freq[i].c<<" "<<freq[i].cnt<<endl;
// }

 for(int i=0;i<n;i++) 
 {
   char c;
   cin>>c;
   freq[c-'a'].cnt++;
 }
   sort(freq,freq+26,cmp);
//  for (int i=0;i<26;i++)
//  {
//    cout<<freq[i].c<<" "<<freq[i];
//  }


 for (int i=0;i<26;i++)
 {
   if(freq[i].cnt>0)
    {
     cout<<freq[i].c<<" "<<freq[i].cnt<<endl;
     for(int j=0;j<freq[i].cnt;j++)
   {
   cout<<freq[i].c;
   }

    } 
 }
  return 0;
}