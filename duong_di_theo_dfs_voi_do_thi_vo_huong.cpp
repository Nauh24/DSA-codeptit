#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> vi;
bool visited[1001];
int parent[1001];
void Dfs(int u){
	visited[u]=true;
	for(auto it:vi[u]){
		if(!visited[it]){
			parent[it]=u;
			Dfs(it);
		}
	}
}
void Trace(int s,int t){
	Dfs(s);
	if(!visited[t]) cout<<-1<<endl;
	else {
		vector<int> trace;
		while(t!=s){
			trace.push_back(t);
			t=parent[t];
		}
		trace.push_back(s);
		reverse(trace.begin(),trace.end());
		for(auto it:trace) cout<<it<<" ";
	}
}
int main(){
int t;cin>>t;
while(t--){
	int n,m,u,v;
	cin>>n>>m>>u>>v;
	vi.resize(n+1);
	for(int i=1;i<=n;i++) vi[i].clear();
	memset(visited,false,sizeof(visited));
	memset(parent,0,sizeof(parent));
	while(m--){
		int x,y;
		cin>>x>>y;
	vi[x].push_back(y);
	vi[y].push_back(x);	
	}
	Trace(u,v);
	cout<<endl;
}
}
/*

*/

