#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<int> v[1001];
bool visited[1001];
int parent[1001];
bool Dfs(int u){
	visited[u]=true;
	for(auto it:v[u]){
		if(!visited[it]){
			parent[it]=u;
			if(Dfs(it)) return true;
		}
		else if(it!=parent[u]) return true;
	}
	return false;
}
int main(){
int t;cin>>t;
while(t--){
	cin>>n;
	for(int i=0;i<1001;i++) v[i].clear();
	memset(visited,false,sizeof(visited));
	memset(parent,0,sizeof(parent));
	for(int i=0;i<n-1;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
		
	
	int ok=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]&&Dfs(i)){
			ok=1;
			cout<<"NO";
			break;
		}
	}
	if(ok==0) cout<<"YES";
	cout<<endl;
}
}

/*

*/

