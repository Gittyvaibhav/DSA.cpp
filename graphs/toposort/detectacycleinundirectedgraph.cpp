#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Solution {
private:
    bool checkCycle(int node, vector<int> adj[], int vis[], int dfsVis[]) {
        vis[node] = 1;
        dfsVis[node] = 1;

        for (auto it : adj[node]) {
            if (!vis[it]) {
                if (checkCycle(it, adj, vis, dfsVis))
                    return true;
            }
            else if (dfsVis[it]) {
                return true;
            }
        }

        dfsVis[node] = 0;
        return false;
    }

public:
    bool isCyclic(int N, vector<int> adj[]) {
        int vis[N], dfsVis[N];

        memset(vis, 0, sizeof(vis));
        memset(dfsVis, 0, sizeof(dfsVis));

        for (int i = 0; i < N; i++) {
            if (!vis[i]) {
                if (checkCycle(i, adj, vis, dfsVis)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    int N = 4;
    vector<int> adj[N];

    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(1); // Creates a cycle

    Solution obj;

    if (obj.isCyclic(N, adj))
        cout << "Cycle Detected\n";
    else
        cout << "No Cycle\n";

    return 0;
}