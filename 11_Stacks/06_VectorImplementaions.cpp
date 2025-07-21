#include <iostream>
#include <vector>
using namespace std;
class stack
{
public:
    vector<int> v; // No Overflow Condition
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (v.size() == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        v.pop_back();
    }
    int top()
    {
        if (v.size() == 0)
            cout << "It is Empty" << endl;
        return v[v.size() - 1];
    }
    int size()
    {
        return v.size();
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.top();
    return 0;
}