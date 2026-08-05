#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // DFS for Topological Sort
    void topoSort(int node,
                  vector<vector<pair<int, int>>> &adj,
                  vector<int> &vis,
                  stack<int> &st) {

        vis[node] = 1;

        // Visit all adjacent nodes
        for (auto it : adj[node]) {
            int v = it.first;

            if (!vis[v]) {
                topoSort(v, adj, vis, st);
            }
        }

        // Push after visiting all neighbours
        // (Postorder gives Topological Order)
        st.push(node);
    }

public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges) {

        // -------------------------------
        // Step 1: Build Adjacency List
        // adj[u] = {v, weight}
        // -------------------------------

        vector<vector<pair<int, int>>> adj(V);

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];   // source
            int v = edges[i][1];   // destination
            int wt = edges[i][2];  // edge weight

            adj[u].push_back({v, wt});
        }

        // -------------------------------
        // Step 2: Topological Sort
        // -------------------------------

        vector<int> vis(V, 0);
        stack<int> st;

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                topoSort(i, adj, vis, st);
            }
        }

        // -------------------------------
        // Step 3: Initialize Distance Array
        // Source node = 0
        // -------------------------------

        vector<int> dist(V, INT_MAX);
        dist[0] = 0;

        // -------------------------------
        // Step 4: Process nodes in
        // Topological Order
        // -------------------------------

        while (!st.empty()) {

            int node = st.top();
            st.pop();

            // Ignore unreachable nodes
            if (dist[node] == INT_MAX)
                continue;

            // Relax all outgoing edges
            for (auto it : adj[node]) {

                int v = it.first;
                int wt = it.second;

                if (dist[node] + wt < dist[v]) {
                    dist[v] = dist[node] + wt;
                }
            }
        }

        // -------------------------------
        // Step 5: Mark unreachable nodes
        // -------------------------------

        for (int i = 0; i < V; i++) {
            if (dist[i] == INT_MAX)
                dist[i] = -1;
        }

        return dist;
    }
};