#include <bits/stdc++.h>
using namespace std;
int main() 
{
list<int> linkedList;
set<int> uniquevalues;
int val;
    
while (true) 
{
cin >> val;
if (val == -1)break;
uniquevalues.insert(val);
}
    
for(int val : uniquevalues) 
{
linkedList.push_back(val);
}

for(int val : linkedList) {
cout << val << " ";
}
cout << endl;
return 0;
}