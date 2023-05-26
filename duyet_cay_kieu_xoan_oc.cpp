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
void spiral_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int cnt = 0;

    while (!q.empty())
    {
        int s = q.size();
        vector<int> v;
        for (int i = 0; i < s; i++)
        {
            Node *p = q.front();
            q.pop();
            v.push_back(p->data);
            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }
        cnt++;
        if (cnt % 2 == 1)
            reverse(v.begin(), v.end());
        for (auto it : v)
            cout << it << " ";
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
        spiral_order(root);
        cout << endl;
    }
    system("pause");
}