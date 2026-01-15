#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *CreateTree()
{
    int data;
    cout << "Enter the Node data" << endl;
    cin >> data;
    if (data == -1)
        return NULL; // Base Case
                     // Step1 Create a Node
    Node *Root = new Node(data);
    // Step 2
    cout << "Left node of " << Root->val << endl;
    Root->left = CreateTree();
    // step 3
    cout << "Right node of " << Root->val << endl;
    Root->right = CreateTree();

    return Root;
}
void alltraversal(Node *root)
{
    vector<int> pre, in, pos;
    stack<pair<Node *, int>> st;
    st.push({root, 1});
    if (root == NULL)
        return;
    while (!st.empty())
    {
        auto it = st.top();
        st.pop();
        // This is for pre Order Traversal
        // Inc 1 to 2
        // Push the left side of tree
        if (it.second == 1)
        {
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);
            if (it.first->left != NULL)
                st.push({it.first->left, 1});
        }
        // This is for inorder Traversal
        // Inc 2 to 3
        // Push the Right side of Tree
        else if (it.second == 2)
        {
            in.push_back(it.first->val);
            it.second++;
            st.push(it);
            if (it.first->right != NULL)
                st.push({it.first->right, 1});
        }
        else
        {
            pos.push_back(it.first->val);
        }
    }
    cout << endl;
    for (int i = 0; i < pre.size(); i++)
    {
        cout << pre[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < in.size(); i++)
    {
        cout << in[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < pos.size(); i++)
    {
        cout << pos[i] << " ";
    }
}
int main()
{
    Node *Root = CreateTree();
    cout << "Root Node Value " << Root->val << endl;
    cout << "Hello" << endl;
    alltraversal(Root);
    return 0;
}