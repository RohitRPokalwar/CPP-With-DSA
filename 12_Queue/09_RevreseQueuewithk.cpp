#include <iostream>
#include <queue>
#include <stack>
using namespace std;
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
    stack<int> st;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    int n = 6;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        int x = q.front();
        q.pop();
    }
    while (st.size() != 0)
    {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < n - k; i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
    }
    DisplayQueue(q);
    return 0;
}