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
// Create Tree
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
// Display Tree
void displaytree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displaytree(root->left);
    displaytree(root->right);
}
void preorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    // NLR
    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void inorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    // LNR
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}
void postorderTraversal(Node *root, vector<int> &arr)
{
    if (root == NULL)
        return;
    // LRN
    postorderTraversal(root->left, arr);
    postorderTraversal(root->right, arr);
    cout << root->val << " ";
}
void levelorderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *first = q.front();
        q.pop();
        cout << first->val << " ";
        if (first->left != NULL)
            q.push(first->left);
        if (first->right != NULL)
            q.push(first->right);
    }
}
// By using marker
vector<vector<int>> levelorderTraversalMarker(Node *root, vector<vector<int>> &arr)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    vector<int> level;
    while (q.size() > 1)
    {
        Node *first = q.front();
        q.pop();
        if (q.front() == NULL)
        {
            arr.push_back(level);
            q.push(NULL);
        }
        else
        {
            level.push_back(first->val);
            if (first->left != NULL)
                q.push(first->left);
            if (first->right != NULL)
                q.push(first->right);
        }
    }
    return arr;
}
// By iteration tree oreder
vector<int> preordertraversal(Node *root)
{
    vector<int> pre;
    if (root == NULL)
        return pre;
    stack<Node *> st;
    st.push(root);
    while (!st.empty())
    {
        Node *n = st.top();
        st.pop();
        pre.push_back(n->val);
        if (n->right != NULL)
            st.push(n->right);
        if (n->left != NULL)
            st.push(n->left);
    }
    return pre;
}
vector<int> inordertraversal(Node *root)
{
    vector<int> in;
    if (root == NULL)
        return in;
    stack<Node *> st;
    Node *n = root;
    st.push(root);
    while (!st.empty())
    {
        if (n != NULL)
        {
            st.push(n);
            n = n->left;
        }
        else
        {
            if (st.empty())
                break;
            n = st.top();
            st.pop();
            in.push_back(n->val);
            n = n->right;
        }
    }
    return in;
}
vector<int> postordertraversal(Node *root)
{
    vector<int> porder;
    if (root == NULL)
        return porder;
    stack<Node *> st1, st2;
    st1.push(root);
    while (!st1.empty())
    {
        root = st1.top();
        st1.pop();
        st2.push(root);
        if (root->left != NULL)
            st1.push(root->left);
        if (root->right != NULL)
            st1.push(root->right);
    }
    while (!st2.empty())
    {
        porder.push_back(st2.top()->val);
        st2.pop();
    }
    return porder;
}
// Using One Stack we can do

// Sum of tree Node
int sumofTree(Node *root)
{
    if (root == NULL)
        return 0;
    int a = root->val + sumofTree(root->left) + sumofTree(root->right);
    return a;
}
int ProductofTree(Node *root)
{
    if (root == NULL)
        return 1;
    int a = root->val * ProductofTree(root->left) * ProductofTree(root->right);
    return a;
}
int sizeofTree(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + sizeofTree(root->left) + sizeofTree(root->right);
}
int findMax(Node *root)
{
    // code here
    if (root == NULL)
        return INT_MIN;
    return max(root->val, max(findMax(root->left), findMax(root->right)));
}

int findMin(Node *root)
{
    // code here
    if (root == NULL)
        return INT_MAX;
    return min(root->val, min(findMin(root->left), findMin(root->right)));
}
void printelementsinnth(Node *root, int currlevel, int level)
{
    if (root == NULL)
        return;
    if (currlevel == level)
    {
        cout << root->val << " ";
        return; // Optimized
    }
    printelementsinnth(root->left, currlevel + 1, level);
    printelementsinnth(root->right, currlevel + 1, level);
}
void Levelorder(Node *root, int level, vector<vector<int>> &arr)
{
    if (root == NULL)
    {
        return;
    }
    if (arr.size() == level)
    {
        arr.push_back({});
    }
    arr[level].push_back(root->val);
    Levelorder(root->left, level + 1, arr);
    Levelorder(root->right, level + 1, arr);
}
int main()
{
    Node *Root = CreateTree();
    cout << "Root Node Value " << Root->val << endl;
    cout << "Hello" << endl;
    levelorderTraversal(Root);
    cout << endl;
    vector<int> a = postordertraversal(Root);
    displaytree(Root);
    cout << endl;
    cout << sumofTree(Root) << endl;
    cout << sizeofTree(Root) << endl;
    cout << ProductofTree(Root) << endl;
    printelementsinnth(Root, 1, 3);
    return 0;
}