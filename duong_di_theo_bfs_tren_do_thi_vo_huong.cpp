#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> vi;
bool visited[1001];
int parent[1001];
void Bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(auto it:vi[x]){
			if(!visited[it]){
				q.push(it);
				visited[it]=true;
				parent[it]=x;
			}
		}
	}
}
void Trace(int s,int t){
	Bfs(s);
	if(!visited[t]) cout<<-1<<endl;
	else {
		vector<int> v;
		while(t!=s){
			v.push_back(t);
			t=parent[t];
		}
		v.push_back(s);
		reverse(v.begin(),v.end());
		for(auto it:v) cout<<it<<" ";
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

