// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   string s;
//   getline(cin,s);
//  long long int number=0;
//   stringstream ss(s);
//   string word;
//   while (ss>>word)
//   {
//     if(word>="A" && word<="Z")
//     {
//     number++;
//     }
//     else if (word>="a" && word<="z")
//     {
//     number++;
//     }
//   }
//   cout<<number<<endl;
  
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  bool inside_word=false;
  int cnt=0;
  for(char c:s)
  { 
   if(isalpha(c))
   {
    if(inside_word==false)
    {
    cnt++;
    }
    inside_word=true;
   
   }
   else
   {
   inside_word=false;
   }
  }
  cout<<cnt<<endl;
return 0;
}
