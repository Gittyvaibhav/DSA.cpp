#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    // Number of vertices
    int n = 6;

    // Adjacency Matrix
    vector<vector<int>> adj =
    {
        //0 1 2 3 4 5
        {0,1,1,0,0,0}, // 0 -> 1,2
        {0,0,0,1,0,0}, // 1 -> 3
        {0,0,0,1,1,0}, // 2 -> 3,4
        {0,0,0,0,0,1}, // 3 -> 5
        {0,0,0,0,0,1}, // 4 -> 5
        {0,0,0,0,0,0}  // 5
    };

    // Store indegree of each vertex
    vector<int> indegree(n, 0);

    // Calculate indegree
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == 1)
            {
                indegree[j]++;
            }
        }
    }

    queue<int> q;

    // Push all vertices having indegree 0
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> topo;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        topo.push_back(node);

        // Reduce indegree of neighbours
        for (int j = 0; j < n; j++)
        {
            if (adj[node][j] == 1)
            {
                indegree[j]--;

                if (indegree[j] == 0)
                {
                    q.push(j);
                }
            }
        }
    }

    // Check if graph has a cycle
    if (topo.size() != n)
    {
        cout << "Cycle detected! Topological Sort not possible.";
    }
    else
    {
        cout << "Topological Sort: ";

        for (int node : topo)
        {
            cout << node << " ";
        }
    }

    cout << endl;

    return 0;
}