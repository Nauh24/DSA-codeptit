#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,u;
vector<int> v[1001];
vector<pair<int,int>> res;
bool vs[1001];
int cnt;
void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u]=true;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		
		for(auto it:v[x]){
			if(!vs[it]){
				q.push(it);
				res.push_back({x,it});
				cnt++;
				vs[it]=true;
			}
		}
	}
}
int main(){
int t;cin>>t;
while(t--){
	cin>>n>>m>>u;
	for(int i=1;i<=n;i++) v[i].clear();
	memset(vs,false,sizeof(vs));
	res.clear();
	cnt=0;
	while(m--){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs(u);
	if(cnt!=n-1) cout<<-1;
	else{
		for(auto it:res) cout<<it.first<<" "<<it.second<<endl;
	}
	cout<<endl;
}	
}
