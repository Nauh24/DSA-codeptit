#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> vi;

int main()
{
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
	int odd_deg=0;
	for(int i=1;i<=n;i++){
		if(vi[i].size()%2==1) odd_deg++;
	}
	if(odd_deg==0) cout<<2;
	else if(odd_deg==2) cout<<1;
	else cout<<0;
	cout<<endl;
}

}
/*

*/
/*

*/

