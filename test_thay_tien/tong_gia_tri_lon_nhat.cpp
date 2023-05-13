#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n,m;
cin>>n>>m;
int w[n+1],c[n+1];
for(int i=1;i<=n;i++){
	cin>>w[i];
	cin>>c[i];
}

int d[n+1][m+1];
memset(d,0,sizeof(d));
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		d[i][j]=d[i-1][j];
		if(j>=w[i]){
			d[i][j]=max(d[i][j],d[i-1][j-w[i]]+c[i]);
		}
	}
}
cout<<d[n][m]<<endl;
}

