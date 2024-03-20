#include<bits/stdc++.h>
using namespace std;
int main() 
{
int t;
cin>>t;
cin.ignore();
while (t--) 
{
string s;
getline(cin,s);
unordered_map<string,int>count;
stringstream ss(s);
string word;
string most_occurred_word;
int max_count = 0;
while(ss>>word) 
{
count[word]++;
if(count[word]>max_count) 
{
max_count=count[word];
most_occurred_word=word;
}
}
cout<<most_occurred_word<<" "<<max_count<<endl;
}

return 0;
}
