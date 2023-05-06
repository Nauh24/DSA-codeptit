#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> vi[1001];
bool visited[1001];
void reset(){
//	vi.resize(1001);
	for(int i=0;i<1001;i++) vi[i].clear();
	memset(visited,false,sizeof(visited));
}
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
		}	
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
		vi[y].push_back(x);
	}
	int cnt=0;
	for(int i=1;i<=n;i++) {
		if(!visited[i]){
			cnt++;
			Bfs(i);
		}
	}
	cout<<cnt;
	cout<<endl;
}
}
/*

*/

