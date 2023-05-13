#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(string s,int l,int r){
	int i=l-1,j=r-1;
	while(i<=j){
		if(s[i]!=s[j]) return false;
	}
	return true;
}
int d[5001][5001];
int main(){
string s;
cin>>s;
int m;cin>>m;
int n=s.size()-1;

for(int i=n;i>=0;i--){
	for(int j=i;j<=n;j++){
		if(i==j) d[i][j]=1;
		else if(s[i]==s[j]){
			if(j-i==1) d[i][j]=1;
			else   d[i][j]=d[i+1][j-1];
		}
	}
}
while(m--){
	int l,r;
	cin>>l>>r;
	if(d[l-1][r-1]==1) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
}

