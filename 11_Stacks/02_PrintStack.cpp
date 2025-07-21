#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // Make Two diffrent Stacks
    // Storing in gt stack
    // then gt to rt stack
    /*Method 1
    stack<int> gt;
    while (st.size() > 0)
    {
        gt.push(st.top());
        st.pop();
    }
    stack<int> rt;
    while (gt.size() > 0)
    {

        rt.push(gt.top());
        gt.pop();
    }
    while (rt.size() > 0)
    {
        st.push(rt.top());
        rt.pop();
    }

    // It is store in st main Stack and print in Main Order
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        st.pop();
    }

    */

    /*Method 2*/
    stack<int> gt;
    while (st.size() > 0)
    {
        gt.push(st.top());
        st.pop();
    }
    while (gt.size() > 0)
    {
        cout << gt.top() << " ";
        gt.pop();
    }
    return 0;
}