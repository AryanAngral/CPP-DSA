// 3_directedgraph.cpp - Directed Graph (Adjacency List)
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
    void print() {
        for(int i=0; i<V; ++i) {
            cout << i << ": ";
            for(int j : adj[i]) cout << j << " ";
            cout << endl;
        }
    }
};
int main() {
    Graph g(4);
    g.addEdge(0,1); g.addEdge(0,2); g.addEdge(1,2); g.addEdge(2,0); g.addEdge(2,3); g.addEdge(3,3);
    g.print();
    return 0;
}
