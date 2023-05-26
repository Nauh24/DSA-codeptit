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
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        cout << p->data << " ";
        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)
            q.push(p->right);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Node *root = NULL;
        for (int i = 1; i <= n; i++)
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
            {
                insert(root, x, y, c);
            }
        }
        level_order(root);
        cout << endl;
    }
    system("pause");
}