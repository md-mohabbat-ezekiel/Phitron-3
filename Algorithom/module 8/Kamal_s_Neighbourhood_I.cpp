#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20;
vector<int> graph[MAXN];
bool visited[MAXN];

int main() {
    int N, E;
    cin >> N >> E;

    for (int i = 0; i < E; i++) {
        int A, B;
        cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A); // Adding this line for two-way connection
    }

    int K;
    cin >> K;

    memset(visited, false, sizeof(visited));
    queue<int> q;
    q.push(K);
    visited[K] = true;

    int connectedHouses = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        connectedHouses++;

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    cout << connectedHouses - 2 << endl; // Subtract 1 to exclude Kamal's house

    return 0;
}
