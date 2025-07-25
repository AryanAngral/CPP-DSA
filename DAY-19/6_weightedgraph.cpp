// 6_weightedgraph.cpp - Weighted Graph (Adjacency List)
#include <iostream>
#include <vector>
using namespace std;

class Graph {
public:
    int V;
    vector<vector<pair<int,int>>> adj;
    Graph(int v) : V(v), adj(v) {}
    void addEdge(int u, int v, int w) {
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    void print() {
        for(int i=0; i<V; ++i) {
            cout << i << ": ";
            for(auto p : adj[i]) cout << "(" << p.first << "," << p.second << ") ";
            cout << endl;
        }
    }
};
int main() {
    Graph g(4);
    g.addEdge(0,1,10); g.addEdge(0,2,6); g.addEdge(0,3,5); g.addEdge(1,3,15); g.addEdge(2,3,4);
    g.print();
    return 0;
}
