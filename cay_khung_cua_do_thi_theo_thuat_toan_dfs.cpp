#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,u;
vector<int> v[1001];
bool vs[1001];
int cnt;
int parent[1001];
vector<pair<int,int>> res;
void dfs(int u){
	vs[u]=true;
	for(auto it:v[u]){
		if(!vs[it]){
			parent[it]=u;
			res.push_back({u,it});
			dfs(it);
			cnt++;
		}
	}
}
int main(){
int t;cin>>t;
while(t--){
cin>>n>>m>>u;
for(int i=1;i<=n;i++) v[i].clear();
memset(vs,false,sizeof(vs));
memset(parent,0,sizeof(parent));
res.clear();
cnt=0;
while(m--){
	int x,y;
	cin>>x>>y;
	v[x].push_back(y);
	v[y].push_back(x);
}	
dfs(u);
if(cnt!=n-1) cout<<-1;
else{
	for(auto it:res) cout<<it.first<<" "<<it.second<<endl;
}

	cout<<endl;
}	
}
