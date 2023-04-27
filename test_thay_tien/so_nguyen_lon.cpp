#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;cin>>t;
while(t--){
	string s1;cin>>s1;
	string s2;cin>>s2;
	int n=s1.size();
	int m=s2.size();
int d[n+1][m+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0||j==0){
				d[i][j]=0;
			}
			else{
				if(s1[i-1]==s2[j-1]){
					d[i][j]=d[i-1][j-1]+1;
				}
				else d[i][j]=max(d[i-1][j],d[i][j-1]);
			}
		}
	}
	cout<<d[n][m];
	cout<<endl;
}
}

