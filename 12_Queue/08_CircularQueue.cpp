#include <iostream>
#include <queue>
using namespace std;
class Queue
{
public:
    int f;
    int b;
    int s;
    vector<int> arr;
    Queue(int val)
    {
        f = 0;
        b = 0;
        s = 0;
        vector<int> v(val);
        arr = v;
    }
    void Push(int val)
    {
        arr[b] = val;
        b++;
        s++;
    }
    void Pop()
    {
        if (s == 0)
        {
            cout << "Overflow Queue is Empty";
            return;
        }
        f++;
        s--;
    }
    int size()
    {
        return s;
    }
    int front()
    {
        if (s == 0)
        {
            cout << "Queue is Empty";
            return 0;
        }
        return arr[f];
    }
    bool isempty()
    {
        if (b - f == 0)
            return true;
        else
            return false;
    }
    void Display()
    {
        for (int i = f; i < b; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    Queue q(4);
    q.Push(5);
    q.Push(10);
    q.Display();
    cout << endl;
    q.Pop();
    q.Display();
    return 0;
}