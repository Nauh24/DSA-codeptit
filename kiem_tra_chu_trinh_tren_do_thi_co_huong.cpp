#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int color[1001]; //trang thai
//bool visited[1001];
vector<int> v[1001];
bool Dfs(int u){
	color[u]=1; //bat dau tham nhung chua duyet het
	for(auto it:v[u]){
		if(color[it]==0){
			if(Dfs(it)) return true;
		}
		else if(color[it]==1) return true;
	}
	color[u]=2; //da duyet het
	return false;
}
int main(){
int t;cin>>t;
while(t--){
	cin>>n>>m;
	for(int i=0;i<1001;i++) v[i].clear();
//	memset(visited,false,sizeof(visited));
	memset(color,0,sizeof(color));
	while(m--){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
	}
	int ok=0;
	for(int i=1;i<=n;i++){
		if(color[i]==0&&Dfs(i)) {
			ok=1;
			cout<<"YES";
			break;
		}
	}
	if(ok==0) cout<<"NO";
	cout<<endl;
}
}

/*

*/

