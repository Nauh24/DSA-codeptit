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
int height(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}
bool check(Node *root, int cnt, int h)
{
    if (root == NULL)
        return true;
    if (!root->left && !root->right)
        return cnt == h;
    return check(root->left, cnt + 1, h) && check(root->right, cnt + 1, h);
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
        int h = height(root);
        // cout << h;
        if (check(root, 1, h))
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    system("pause");
}