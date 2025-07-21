#include <iostream>
#include <stack>
using namespace std;
void DisplayRec(stack<int> &st)
{
    if (st.size() == 0)
        return;
    cout << st.top() << " ";
    int x = st.top();
    st.pop();
    DisplayRec(st);
    st.push(x);
}
void DisplayRecRev(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    DisplayRecRev(st);
    cout << x << " ";
    st.push(x);
}
// Push at Bottom Recursively
void PushAtBottomRec(stack<int> &st, int val)
{
    if (st.size() == 0)
    {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    PushAtBottomRec(st, val);
    st.push(x);
}
// Reverse the WHOLE STACK
void reverseS(stack<int> &st)
{
    if (st.size() == 1)
        return;
    int x = st.top();
    st.pop();
    reverseS(st);
    PushAtBottomRec(st, x);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    DisplayRec(st);
    // cout << endl;
    // DisplayRecRev(st);
    // cout << endl;
    // PushAtBottomRec(st, 70);
    // DisplayRec(st);
    // cout << endl;
    // DisplayRecRev(st);
    reverseS(st);
    cout << endl;
    DisplayRec(st);
    return 0;
}