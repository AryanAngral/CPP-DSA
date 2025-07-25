// 7_toposort.cpp - Topological Sort (Kahn's Algorithm)
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
    void topoSort() {
        vector<int> in_degree(V, 0);
        for(int u=0; u<V; ++u) {
            for(int v : adj[u]) in_degree[v]++;
        }
        queue<int> q;
        for(int i=0; i<V; ++i) if(in_degree[i]==0) q.push(i);
        int cnt=0;
        vector<int> topo;
        while(!q.empty()) {
            int u = q.front(); q.pop();
            topo.push_back(u);
            for(int v : adj[u]) {
                if(--in_degree[v]==0) q.push(v);
            }
            cnt++;
        }
        if(cnt!=V) cout << "Cycle exists!" << endl;
        else {
            cout << "Topological Sort: ";
            for(int x : topo) cout << x << " ";
            cout << endl;
        }
    }
};
int main() {
    Graph g(6);
    g.addEdge(5,2); g.addEdge(5,0); g.addEdge(4,0); g.addEdge(4,1); g.addEdge(2,3); g.addEdge(3,1);
    g.topoSort();
    return 0;
}
