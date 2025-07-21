#include <iostream>
#include <queue>
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
    // push
    // pop
    // front->top
    // size , empty
    // back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout << q.front() << endl;
    // cout << q.back() << endl;
    // q.pop();
    // cout << q.front();
    DisplayQueue(q);
    q.pop();
    DisplayQueue(q);
    return 0;
}