#include <bits/stdc++.h>
using namespace std;

/*
=========================================
        DIJKSTRA'S ALGORITHM
=========================================

Used to find the shortest distance from a
single source node to all other nodes.

Conditions:
1. Graph can be directed or undirected.
2. Edge weights must be NON-NEGATIVE.

Time Complexity:
O((V + E) * log V)

Space Complexity:
O(V + E)

Idea:
Always process the node having the minimum
distance from the source.
*/

class Solution {
public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {

        // -------------------------------
        // Step 1: Create Adjacency List
        // -------------------------------
        // adj[node] = {adjacentNode, weight}
        vector<vector<pair<int,int>>> adj(V);

        for(auto &it : edges)
        {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            // Undirected graph
            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});

            // For directed graph remove the second line.
        }


        // ---------------------------------------------
        // Step 2: Min Heap (distance, node)
        // ---------------------------------------------
        // The node with the smallest distance
        // always comes to the top.
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;


        // ---------------------------------------------
        // Step 3: Distance Array
        // ---------------------------------------------
        // Initially every node is unreachable.
        vector<int> dist(V, INT_MAX);

        // Source node has distance 0.
        dist[src] = 0;

        pq.push({0, src});


        // ---------------------------------------------
        // Step 4: Start Dijkstra
        // ---------------------------------------------
        while(!pq.empty())
        {
            int dis = pq.top().first;
            int node = pq.top().second;

            pq.pop();


            // -----------------------------------------
            // Ignore outdated entries.
            //
            // Example:
            // (10,2) pushed earlier
            // (5,2) found later
            //
            // When (10,2) comes out,
            // dist[2] is already 5,
            // so skip it.
            // -----------------------------------------
            if(dis > dist[node])
                continue;


            // Traverse all neighbours
            for(auto it : adj[node])
            {
                int adjNode = it.first;
                int edgeWeight = it.second;


                // -------------------------------------
                // Relaxation
                //
                // If going through current node gives
                // a shorter path, update distance.
                // -------------------------------------
                if(dis + edgeWeight < dist[adjNode])
                {
                    dist[adjNode] = dis + edgeWeight;

                    // Push updated distance
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }

        return dist;
    }
};