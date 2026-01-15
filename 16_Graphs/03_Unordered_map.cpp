#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// Adjancency MAp
vector<unordered_map<int, int>> g;
int V;
void addedge(int src, int des, int w, bool bi_dir = true)
{
    g[src][des] = w;
    if (bi_dir)
    {
        g[des][src] = w;
    }
}
void displayG()
{
    for (int i = 0; i < V; i++)
    {
        cout << i << " : ";
        for (auto ele : g[i])
        {
            cout << ele.first << " w " << ele.second << " , ";
        }
        cout << "\n";
    }
}
int main()
{
    cin >> V;
    g.resize(V, unordered_map<int, int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d, w;
        cin >> s >> d >> w;
        addedge(s, d, w);
    }
    displayG();
    return 0;
}