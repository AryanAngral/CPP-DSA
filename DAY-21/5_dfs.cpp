// 5_dfs.cpp - Depth-First Search (DFS)
#include <iostream>
#include <vector>
using namespace std;

class Graph {
public:
    int V;
    vector<vector<int>> adj;
    Graph(int v) : V(v), adj(v) {}
    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }
    void DFSUtil(int v, vector<bool>& visited) {
        visited[v] = true;
        cout << v << " ";
        for(int u : adj[v]) {
            if(!visited[u]) DFSUtil(u, visited);
        }
    }
    void DFS(int s) {
        vector<bool> visited(V, false);
        DFSUtil(s, visited);
    }
};
int main() {
    Graph g(4);
    g.addEdge(0,1); g.addEdge(0,2); g.addEdge(1,2); g.addEdge(2,0); g.addEdge(2,3); g.addEdge(3,3);
    cout << "DFS starting from 2: ";
    g.DFS(2);
    cout << endl;
    return 0;
}
