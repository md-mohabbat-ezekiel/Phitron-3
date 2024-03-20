

// #include<bits/stdc++.h>
// using namespace std;
// string replace(string s, const string& t, const string& r)
//  {
//     int pos = 0;
//     while ((pos = s.find(t, pos)) != string::npos) 
//     {
//         s.replace(pos,t.length(),r);
//         pos += r.length();
//     }
//     return s;
// }

// int main() 
// {
//     int t;
//     cin>>t;
//     for (int i=0;i<t;i++) 
//     {
//     string a, b;
//     cin>>a>>b;
//     string m=replace(a, b,"$");
//     cout<<m<<endl;
//     }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++) 
    {
    string a, b;
    cin>>a>>b;
     int pos = 0;
    while ((pos = a.find(b, pos)) != string::npos) 
    {
        a.replace(pos,b.length(),"$");
        pos += b.length();
    }
    cout<<a<<endl;
    }
return 0;
}

