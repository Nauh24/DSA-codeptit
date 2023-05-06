#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int a[501][501];
int n,m;
void Dfs(int i,int j){
	a[i][j]=0;
	for(int z=0;z<8;z++){
		int x=i+dx[z];
		int y=j+dy[z];
		if(x>=1&&x<=n&&y>=1&&y<=m&&a[x][y]==1) Dfs(x,y);
	}
}

int main(){
	int t;cin>>t;
	while(t--){
	
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) {
				cin>>a[i][j];
			}
		}
		int cnt=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]==1){
					cnt++;
					Dfs(i,j);
				}
			}
		}
		cout<<cnt;
		cout<<endl;
	}
}