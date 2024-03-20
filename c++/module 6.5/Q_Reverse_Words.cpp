#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   getline(std::cin, s);
   stringstream ss(s);
   string word;
   bool firstWord = true;

    while (ss >> word) 
    {
        reverse(word.begin(), word.end());
        if (firstWord) 
        {
            firstWord = false;
        } 
        else 
        {
           cout << " ";
        }
        cout << word;
    }

   cout <<endl;

    return 0;
}
