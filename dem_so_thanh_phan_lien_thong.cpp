#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> vi;
bool check[1001];
void reset() {
	vi.resize(1001);
	for (int i = 0; i < 1001; i++) vi[i].clear();
	memset(check, false, sizeof(check));
}
void DFS(int u) {
	check[u] = true;
	for (auto x : vi[u]) {
		if (!check[x])DFS(x);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		reset();
		int m, n; cin >> m >> n;
		while (n--) {
			int a, b; cin >> a >> b;
			vi[a].push_back(b);
			vi[b].push_back(a);
		}
		int cnt = 0;
		for (int i = 1; i <= m; i++) {
			if (!check[i]) {
				cnt++;
				DFS(i);
			}
		}
		cout << cnt << endl;
	}
}