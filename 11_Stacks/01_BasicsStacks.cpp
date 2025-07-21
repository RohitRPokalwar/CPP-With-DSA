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
    cout << st.top() << endl;
    // Print Stacks in Reverse Order Here all the elements in Stack will lost
    // while (st.size() > 0)
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // Print Stack Revrese Order with Storing in Other Stack
    stack<int> tem;
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        tem.push(st.top());
        st.pop();
    }
    cout << endl;
    cout << tem.top() << " "; // 10
    return 0;
}