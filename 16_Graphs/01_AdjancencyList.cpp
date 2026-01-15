#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<list<int>> g;
int V;
void addedge(int src, int des, bool bi_dir = true)
{
    g[src].push_back(des);
    if (bi_dir)
    {
        g[des].push_back(src);
    }
}
void displayG()
{
    for (int i = 0; i < V; i++)
    {
        cout << i << " : ";
        for (auto ele : g[i])
        {
            cout << ele << " , ";
        }
        cout << "\n";
    }
}
int main()
{
    cin >> V;
    g.resize(V, list<int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        addedge(s, d);
    }
    displayG();
    return 0;
}