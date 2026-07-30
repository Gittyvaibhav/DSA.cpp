// breadth first search or level wise traversal
// queue will contain starting node and visited array will mark visited nodes
// traverse on the adjcency list

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> solve(int n, vector<int> adj[]) {
    vector<int> bfs;
    vector<int> vis(n + 1, 0);

    queue<int> q;

    vis[1] = 1;          // Start BFS from node 1
    q.push(1);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        bfs.push_back(node);

        for (auto it : adj[node]) {
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return bfs;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);  
    }

    vector<int> bfs = solve(n, adj);

    for (int node : bfs) {
        cout << node << " ";
    }

    return 0;
}