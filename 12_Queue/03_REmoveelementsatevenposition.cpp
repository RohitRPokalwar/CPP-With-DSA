#include <iostream>
#include <queue>
using namespace std;
void removeevenpos(queue<int> &q)
{
    // Store the Queue Size Compulsory
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            q.pop();
        }
        else
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
void DisplayQueue(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    removeevenpos(q);
    DisplayQueue(q);
    return 0;
}