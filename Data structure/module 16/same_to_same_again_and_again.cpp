#include<bits/stdc++.h>
using namespace std;
int main() 
{
int n, m;
cin >> n >> m;
stack<int>stack_A;
queue<int>queue_B;

for (int i = 0; i < n; i++) 
{
int num;
cin >> num;
stack_A.push(num);
}

for (int i = 0; i < m; i++) 
{
int num;
cin >> num;
queue_B.push(num);
}

vector<int> ordered_list;
bool same_lists = true;

for (int i = 0; i < n; i++) 
{
 if (stack_A.empty() || queue_B.empty()) 
 {
 same_lists = false;
 break;
 }

int top_Stack = stack_A.top();
int front_Queue = queue_B.front();

if (top_Stack == front_Queue) 
{
stack_A.pop();
queue_B.pop();
ordered_list.push_back(top_Stack);
} 

else 
{
same_lists = false;
break;
}

}

if (same_lists && stack_A.empty() && queue_B.empty() && ordered_list.size() == n) 
{
cout << "YES" << endl;
} 

else 
{
cout << "NO" << endl;
}
return 0;
}