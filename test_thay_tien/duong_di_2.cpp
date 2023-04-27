#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int MAXN = 1005;
vector<int> adj[MAXN];
bool visited[MAXN];
int dist[MAXN];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    dist[s] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, s;
        cin >> n >> m >> s;
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            visited[i] = false;
        }
        memset(dist, -1, sizeof(dist));
        while (m--) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs(s);
        for (int i = 1; i <= n; i++) {
            if (i != s) {
                if (dist[i] != -1) {
                    cout << s << " ";
                    cout << i << " ";
                    int j = i;
                    while (j != s) {
                        for (int v : adj[j]) {
                            if (dist[v] == dist[j] - 1) {
                                j = v;
                                break;
                            }
                        }
                        cout << j << " ";
                    }
                    cout << endl;
                } else {
                    cout << "No path" << endl;
                }
            }
        }
    }
    return 0;
}

