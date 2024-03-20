#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> graph[N];
bool visited[N];

int dfs(int node) 
{
visited[node] = true;
int comp_size = 1;
for (int neighbor : graph[node]) 
{
if (!visited[neighbor]) comp_size += dfs(neighbor);
}

    return comp_size;
}

int main() 
{
int N, E;
cin >> N >> E;
for (int i = 0; i < E; i++) 
{
int A, B;
cin >> A >> B;
graph[A].push_back(B);
graph[B].push_back(A);
}

vector<int> c_sizes;
memset(visited, false, sizeof(visited));
for (int i = 0; i < N; i++) 
{
  if (!visited[i]) 
  {
  int componentSize = dfs(i);
    if (componentSize > 1) 
    { 
     c_sizes.push_back(componentSize);
    }
  }
}

sort(c_sizes.begin(), c_sizes.end());

for (int size : c_sizes) 
{
cout << size << " ";
}

cout << endl;

    return 0;
}
