#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// DFS Function
void dfs(int node, vector<int>& vis, vector<vector<int>>& adj, stack<int>& st)
{
    vis[node] = 1;

    // Traverse all neighbours
    for (int i = 0; i < adj.size(); i++)
    {
        if (adj[node][i] == 1 && !vis[i])
        {
            dfs(i, vis, adj, st);
        }
    }

    // Push after visiting all neighbours
    st.push(node);
}

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

    vector<int> vis(n, 0);
    stack<int> st;

    // Call DFS for every unvisited node
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, adj, st);
        }
    }

    cout << "Topological Sort: ";

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;

    return 0;
}