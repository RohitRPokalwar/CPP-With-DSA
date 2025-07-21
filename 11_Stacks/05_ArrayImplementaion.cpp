#include <iostream>
using namespace std;
class stack
{
public:
    int arr[5];
    int idx = -1;
    void push(int val)
    {
        if (idx == sizeof(arr) / sizeof(int))
        {
            cout << "Stack is Full" << endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop()
    {
        if (idx == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        idx--;
    }
    int top()
    {
        if (idx == 0)
            cout << "It is Empty" << endl;
        return arr[idx];
    }
    int size()
    {
        return idx + 1;
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