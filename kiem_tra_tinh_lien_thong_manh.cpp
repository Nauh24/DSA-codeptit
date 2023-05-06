#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> vi[1001];
bool visited[1001];
void reset(){
	for(int i=0;i<1001;i++) vi[i].clear();
	memset(visited,false,sizeof(visited));
}
void Dfs(int u){
	visited[u]=true;
	for(auto it:vi[u]){
		if(!visited[it]){
			Dfs(it);
		}
	}
}
int main(){
int t;cin>>t;
while(t--){
	int n,m;
	cin>>n>>m;
	reset();
	while(m--){
		int x,y;
		cin>>x>>y;
		vi[x].push_back(y);
	}
	int ok=1;
	for(int i=1;i<=n;i++){
		memset(visited,false,sizeof(visited));
		Dfs(i);
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(visited[j]) cnt++;
		}
		if(cnt!=n) {
			ok=0;
			break;
		}
	}
	if(ok==1) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
}
/*

*/

