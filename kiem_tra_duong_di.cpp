#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> vi;
bool visited[1001];
int parent[1001];
void Dfs(int u){
visited[u]=true;
for(auto it:vi[u]){
    if(!visited[it]){
        Dfs(it);
    }
}
}
void Trace(int x,int y){
Dfs(x);
if(!visited[y]) cout<<"NO"<<endl;
else {
cout<<"YES"<<endl;
}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
int n,m;
cin>>n>>m;
vi.resize(n+1);
for(int i=1;i<=n;i++) vi[i].clear();
while(m--){
    int x,y;
    cin>>x>>y;
vi[x].push_back(y);
vi[y].push_back(x);
}
int q;cin>>q;
while(q--){
int x,y;
cin>>x>>y;
memset(visited,false,sizeof(visited));
memset(parent,0,sizeof(parent));
Trace(x,y);
    cout<<endl;
}
    cout<<endl;
}
    system("pause");
}