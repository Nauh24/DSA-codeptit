#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void makeNode(Node *root, int u, int v, char c)
{
    if (c == 'L')
        root->left = new Node(v);
    else
        root->right = new Node(v);
}

void insert(Node *root, int u, int v, char c)
{
    if (root == NULL)
        return;
    if (root->data == u)
        makeNode(root, u, v, c);
    else
    {
        insert(root->left, u, v, c);
        insert(root->right, u, v, c);
    }
}
void input(Node *&root)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        char c;
        cin >> x >> y >> c;
        if (root == NULL)
        {
            root = new Node(x);
            makeNode(root, x, y, c);
        }
        else
            insert(root, x, y, c);
    }
}
bool check(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1->data != root2->data)
        return false;
    if ((root1->left && !root2->left) || (!root1->left && root2->left))
        return false;
    if ((root1->right && !root2->right) || (!root1->right && root2->right))
        return false;
    return check(root1->left, root2->left) && check(root1->right, root2->right);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *root1 = NULL;
        Node *root2 = NULL;
        input(root1);
        input(root2);
        if (check(root1, root2))
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    system("pause");
}