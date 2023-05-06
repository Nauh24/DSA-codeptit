#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> vi[1001];
bool visited[1001];
void Dfs (int u){
	visited[u]=true;
	for(auto it:vi[u]){
		if(!visited[it]){
			Dfs(it);
		}
	}
}
void dinhtru(int n){
	int tplt=0;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			tplt++;
			Dfs(i);
		}
	}
	for(int i=1;i<=n;i++){
		int dem=0;
		memset(visited,false,sizeof(visited));
		visited[i]=true;
		for(int j=1;j<=n;j++){
			if(!visited[j]){
				dem++;
				Dfs(j);
			}
		}
		if(dem>tplt) cout<<i<<" ";
	}
}
int main(){
int t;cin>>t;
while(t--){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<1001;i++) vi[i].clear();
	while(m--){
		int x,y;
		cin>>x>>y;
		vi[x].push_back(y);
		vi[y].push_back(x);
	}
	dinhtru(n);
	cout<<endl;
}
}
/*

*/

