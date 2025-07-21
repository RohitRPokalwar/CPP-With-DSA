#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void ReverseQ(queue<int> &q)
{
    stack<int> st;
    int n = q.size();
    // for (int i = 0; i < n; i++)
    // {
    //     st.push(q.front());
    //     q.pop();
    // }
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (st.size() > 0)
    {
        q.push(st.top());
        st.pop();
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
    ReverseQ(q);
    DisplayQueue(q);
    return 0;
}