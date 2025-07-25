// 4_bfs.cpp - Breadth-First Search (BFS)
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
public:
    int V;
    vector<vector<int>> adj;
    Graph(int v) : V(v), adj(v) {}
    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }
    void BFS(int s) {
        vector<bool> visited(V, false);
        queue<int> q;
        visited[s] = true;
        q.push(s);
        while(!q.empty()) {
            int v = q.front(); q.pop();
            cout << v << " ";
            for(int u : adj[v]) {
                if(!visited[u]) {
                    visited[u] = true;
                    q.push(u);
                }
            }
        }
    }
};
int main() {
    Graph g(4);
    g.addEdge(0,1); g.addEdge(0,2); g.addEdge(1,2); g.addEdge(2,0); g.addEdge(2,3); g.addEdge(3,3);
    cout << "BFS starting from 2: ";
    g.BFS(2);
    cout << endl;
    return 0;
}
