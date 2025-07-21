#include <iostream>
#include <stack>
using namespace std;
void PushAtBottom(stack<int> &st, int n)
{
    stack<int> gt;
    while (st.size() > 0)
    {
        gt.push(st.top());
        st.pop();
    }
    st.push(n);
    while (gt.size() > 0)
    {
        st.push(gt.top());
        gt.pop();
    }
}
void PushatAnyIndex(stack<int> &st, int pos, int n)
{
    stack<int> tem;
    while (st.size() > pos)
    {
        tem.push(st.top());
        st.pop();
    }
    st.push(n);
    while (tem.size() > 0)
    {
        st.push(tem.top());
        tem.pop();
    }
}
void Display(stack<int> &st)
{
    stack<int> gt;
    while (st.size() > 0)
    {
        gt.push(st.top());
        st.pop();
    }
    while (gt.size() > 0)
    {
        cout << gt.top() << " ";
        st.push(gt.top());
        gt.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    Display(st);
    cout << endl;
    PushAtBottom(st, 70);
    Display(st);
    cout << endl;
    PushatAnyIndex(st, 2, 90);
    Display(st);
    return 0;
}