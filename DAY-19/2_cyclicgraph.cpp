// 2_cyclicgraph.cpp - Detect Cycle in Undirected Graph (DFS)
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
        adj[v].push_back(u);
    }
    bool isCyclicUtil(int v, vector<bool>& visited, int parent) {
        visited[v] = true;
        for(int u : adj[v]) {
            if(!visited[u]) {
                if(isCyclicUtil(u, visited, v)) return true;
            } else if(u != parent) {
                return true;
            }
        }
        return false;
    }
    bool isCyclic() {
        vector<bool> visited(V, false);
        for(int i=0; i<V; ++i) {
            if(!visited[i] && isCyclicUtil(i, visited, -1)) return true;
        }
        return false;
    }
};
int main() {
    Graph g(5);
    g.addEdge(0,1); g.addEdge(1,2); g.addEdge(2,3); g.addEdge(3,4); g.addEdge(4,1);
    cout << (g.isCyclic() ? "Graph contains cycle" : "No cycle") << endl;
    return 0;
}
