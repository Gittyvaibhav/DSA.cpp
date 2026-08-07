#include <bits/stdc++.h>
using namespace std;

// Dijkstra's Algorithm using Set
// Time Complexity: O((V + E) * log V)
// Space Complexity: O(V + E)

vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {

    // ---------------------------------------------------------
    // Step 1: Create Adjacency List
    // adj[u] = {v, weight}
    // ---------------------------------------------------------
    vector<vector<pair<int, int>>> adj(V);

    for (auto &it : edges) {
        int u = it[0];
        int v = it[1];
        int wt = it[2];

        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});      // Remove if graph is directed
    }

    // ---------------------------------------------------------
    // Step 2: Distance Array
    // Initially every node is unreachable (INT_MAX)
    // ---------------------------------------------------------
    vector<int> dist(V, INT_MAX);

    // ---------------------------------------------------------
    // Step 3: Set stores {distance, node}
    // It always keeps the smallest distance at the beginning.
    // Similar to a Min Heap but also supports erase().
    // ---------------------------------------------------------
    set<pair<int, int>> st;

    dist[src] = 0;
    st.insert({0, src});

    // ---------------------------------------------------------
    // Step 4: Process nodes until set becomes empty
    // ---------------------------------------------------------
    while (!st.empty()) {

        // Smallest distance node
        auto it = *st.begin();

        int dis = it.first;
        int node = it.second;

        // Remove it because we're processing it now
        st.erase(st.begin());

        // -----------------------------------------------------
        // Traverse all neighbours
        // -----------------------------------------------------
        for (auto x : adj[node]) {

            int adjNode = x.first;
            int edgeWt = x.second;

            // -------------------------------------------------
            // Relaxation
            // If a shorter path is found, update it.
            // -------------------------------------------------
            if (dis + edgeWt < dist[adjNode]) {

                // Remove the previous distance from the set.
                // Otherwise the set would contain an outdated
                // distance for the same node.
                if (dist[adjNode] != INT_MAX) {
                    st.erase({dist[adjNode], adjNode});
                }

                // Update shortest distance
                dist[adjNode] = dis + edgeWt;

                // Insert new distance
                st.insert({dist[adjNode], adjNode});
            }
        }
    }

    return dist;
}

int main() {

    int V, E;
    cin >> V >> E;

    vector<vector<int>> edges;

    // Input edges
    for (int i = 0; i < E; i++) {

        int u, v, wt;
        cin >> u >> v >> wt;

        edges.push_back({u, v, wt});
    }

    int src;
    cin >> src;

    vector<int> ans = dijkstra(V, edges, src);

    cout << "Shortest distances:\n";

    for (int i = 0; i < V; i++) {

        if (ans[i] == INT_MAX)
            cout << "INF ";
        else
            cout << ans[i] << " ";
    }

    cout << endl;
}