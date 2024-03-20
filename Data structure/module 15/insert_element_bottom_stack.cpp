#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    // Write your code here.
    stack<int>newst;
    while(!st.empty())
    {
      newst.push(st.top());
      st.pop();
    }
    newst.push(x);
    while(!newst.empty())
    {
    st.push(newst.top());
    newst.pop();
    }
   return st; 
}