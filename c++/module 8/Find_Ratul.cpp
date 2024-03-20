#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int found=false;
    while (ss>>word)
    {
        if(word=="Ratul") found=true;
    }
    
      if (found) 
      {
        cout<<"YES"<<endl;
      }  
      else 
      {
        cout<<"NO"<<endl;
    }
  
return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main() 
// {
// string s;
// getline(cin,s);
// stringstream ss(s);
// string word;
// int found=false;
// while (ss>>word) 
// {
// if (word=="Ratul") 
// {
// found = true;
// break;
// }
// }
// if(found) 
// {
// cout <<"YES"<<endl;
// } 
// else 
// {
// cout <<"NO"<<endl;
// }
// return 0;
// }
