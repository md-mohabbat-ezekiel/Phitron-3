// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   string s;

//   getline(cin,s);
//   string x;
//   cin>>x;
//   int cnt=0;

// while(s.find(x)!=-1)
// {
// cnt++;
// }
// cout<<cnt<<endl;
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string x;
    getline(cin, x);

    int cnt = 0;
    size_t pos = 0;

    while ((pos = s.find(x, pos)) != string::npos)
    {
        cnt++;
        pos += x.length();
    }

    cout << cnt << endl;

    return 0;
}


