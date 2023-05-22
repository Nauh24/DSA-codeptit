#include<bits/stdc++.h>
using namespace std;
#define ll long long
	int x,y,z;
	vector<int> v[100001];
	bool vs[100001];
	void Dfs(int x){
		vs[x]=true;
		for(auto it:v[x]){
			if(!vs[it]){
				Dfs(it);
			}
		}
	}
int main(){
int q;cin>>q;
while(q--){
	cin>>x>>y>>z;
	if(z==1) {
		v[x].push_back(y);
		v[y].push_back(x);
	}
	else{
memset(vs,false,sizeof(vs));
Dfs(x);
		if(vs[y]) cout<<1;
		else cout<<0;
	}
	cout<<endl;
}
}
