#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& result, const vector<int>& a1, const vector<int>& a2) 
{
int i = 0, j = 0;
int n1 = a1.size(), n2 = a2.size();
int index = result.size() - 1;

while (i < n1 && j < n2) 
{
 if (a1[i] >= a2[j]) 
 {
 result[index--] = a1[i++];
 } 

 else 
 {
 result[index--] = a2[j++];
 }
}

while (i < n1) result[index--] = a1[i++];
while (j < n2) result[index--] = a2[j++];
}

int main() 
{
 int n1, n2;
 cin >> n1;

 vector<int> arr1(n1);
 for (int i = 0; i < n1; ++i) 
 {
 cin >> arr1[i];
 }
 cin >> n2;

 vector<int> arr2(n2);
 for (int i = 0; i < n2; ++i) 
 {
 cin >> arr2[i];
 }

 vector<int> result(n1 + n2);
 merge(result, arr1, arr2);
for (int i =  n1 + n2 -1; i >=0; i--) 
{
cout << result[i] << " ";
}
cout << endl;
return 0;
}
