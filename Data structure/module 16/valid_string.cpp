#include<bits/stdc++.h>
using namespace std;
bool valid_string(const string & s) 
{
stack<char> st;
for(char ch : s)
{ 
if (ch == 'A') 
{
 if (!st.empty() && st.top() == 'B') 
 {
 st.pop();
 } 
  else 
  {
  st.push(ch);
  }
} 
else if(ch == 'B') 
{
 if (!st.empty() && st.top() == 'A') 
 {
 st.pop();
 } 

 else 
 {
 st.push(ch);
 }
}

}

 return st.empty();
}

int main() 
{
int t;
cin >> t;
while (t--) 
{
string s;
cin >> s;

if (valid_string(s)) 
{
cout << "YES" << endl;
} 

else 
{
cout << "NO" << endl;
}
}
return 0;
}