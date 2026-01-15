#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
    int V;
    list<int> *l; // Dynamic arr //int *tem
public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
        // tem=new int tem[V]
    }
    void addEdge(int v, int u)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " : ";
            for (int neigh : l[i])
                cout << neigh << " ";
            cout << endl;
        }
    }
    void BFSGraph()
    {
        queue<int> q;
        vector<bool> visit(V, false);
        q.push(0);
        visit[0] = true;
        cout << "BFS ";
        while (q.size() > 0)
        {
            int u = q.front();
            q.pop();
            cout << u << " ";
            for (int v : l[u])
            {
                if (!visit[v])
                {
                    visit[v] = true;
                    q.push(v);
                }
            }
        }
    }

    void DFSGraphHelper(int u, vector<bool> &visit)
    {
        cout << u << " ";
        visit[u] = true;
        for (auto v : l[u])
        {
            if (!visit[v])
            {
                DFSGraphHelper(v, visit);
            }
        }
    }

    void DFSGraph()
    {
        int src = 0;
        vector<bool> vis(V, false);

        // For Disconnected Graph
        // for (int i = 0; i < V; i++)
        // {
        //     if (!vis[i])
        //     {
        //         DFSGraphHelper(i, vis);
        //     }
        // }
        DFSGraphHelper(src, vis);
    }
};
int main()
{
    Graph g(5);
    vector<bool> visit;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);

    g.printGraph();
    g.BFSGraph();
    cout << endl;
    cout << "DFS " << endl;
    g.DFSGraph();
    return 0;
}