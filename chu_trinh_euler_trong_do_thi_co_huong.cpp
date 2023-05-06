#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> vi;
map<int,int> ra,vao;
int main()
{
 int t;cin >>t;
 while(t--)
 {
int n,m;
cin>>n>>m;
ra.clear();
vao.clear();
while(m--){
	int x,y;
	cin>>x>>y;
	ra[x]++;
	vao[y]++;
}
int cnt=0;
for(int i=1;i<=n;i++){
	if(ra[i]==vao[i]) cnt++;
}
if(cnt==n) cout<<1;
else cout<<0;
 cout <<endl;
 }
}
/*

*/
/*

*/
