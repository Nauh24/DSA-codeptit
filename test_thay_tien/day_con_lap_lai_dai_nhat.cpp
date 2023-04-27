#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;cin>>t;
while(t--){
	int n;cin>>n;
	string s;cin>>s;
	int d[n+1][n+1]={};
	
for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
		if(s[i-1]==s[j-1]&&i!=j) d[i][j]=d[i-1][j-1]+1;
	else d[i][j]=max(d[i-1][j],d[i][j-1]);
		
	}
}
cout<<d[n][n];
	cout<<endl;
}
}

