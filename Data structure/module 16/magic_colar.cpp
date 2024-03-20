#include<bits/stdc++.h>
using namespace std;
string getFinalColors(const string& colors) 
{
stack<char> colorStack;
for(char color : colors) 
{
 if (!colorStack.empty() && colorStack.top() == color) 
 {
 colorStack.pop();
 } 

 else 
 {
  colorStack.push(color);
 }
}

string finalColors;
while (!colorStack.empty()) 
{
  finalColors = colorStack.top() + finalColors;
  colorStack.pop();
}
return finalColors;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string colors;
        cin >> colors;

        string finalColors = getFinalColors(colors);
        cout << finalColors << endl;
    }

    return 0;
}