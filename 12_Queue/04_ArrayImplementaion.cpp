#include <iostream>
#include <queue>
using namespace std;
class Queue
{
public:
    int f;
    int b;
    int arr[5];
    Queue()
    {
        f = 0;
        b = 0;
    }
    void Push(int val)
    {
        arr[b] = val;
        b++;
    }
    void Pop()
    {
        if (b - f == 0)
        {
            cout << "Overflow Queue is Empty";
            return;
        }
        f++;
    }
    int size()
    {
        return b - f;
    }
    int front()
    {
        if (b - f == 0)
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
    Queue q;
    q.Push(5);
    q.Push(10);
    q.Display();
    cout << endl;
    q.Pop();
    q.Display();
    return 0;
}