#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> graph[N];
bool visited[N];

int dfs(int node) 
{
  visited[node] = true;
  int size = 1;
  for (int neighbor : graph[node]) 
   {
   if (!visited[neighbor]) size += dfs(neighbor);
   }

    return size;
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

vector<int> c_sizes;
memset(visited, false, sizeof(visited));
for (int i = 0; i < N; i++) 
{
  if (!visited[i]) 
  {
   int comp_size = dfs(i);         
     if (comp_size > 1) c_sizes.push_back(comp_size);
  }
}

    sort(c_sizes.begin(), c_sizes.end());

    for (int Size : c_sizes) 
    {
        cout << Size << " ";
    }

    cout << endl;
}
    return 0;
}
