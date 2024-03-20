#include <bits/stdc++.h>
using namespace std;

const int N = 20;
vector<int> graph[N];
bool visited[N];

void dfs(int node) 
{
visited[node] = true;
for (int neighbor : graph[node]) 
{
if (!visited[neighbor]) dfs(neighbor);
}
}

int main() 
{
int N, E;
cin >> N >> E;

for (int i = 0; i < E; i++) 
{
int a, b;
cin >> a >> b;
graph[a].push_back(b);
graph[b].push_back(a);
}

int K;cin >> K;
memset(visited, false, sizeof(visited));
dfs(K);

int Houses = 0;
for (int i = 0; i < N; i++) 
{
if (visited[i]) Houses++;
}
cout << Houses - 1 << endl;
return 0;
}
