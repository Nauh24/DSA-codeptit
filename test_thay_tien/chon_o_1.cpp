#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll b[21][21];
ll a[21][21];
int n;
bool used[21];
ll res;
void Try(int i,ll sum){

	for(int j=0;j<n;j++){
		if(!used[j]){
			used[j]=true;
		if(i==n-1&&sum+a[i][j]>res) res=max(res,sum+a[i][j]);
			else  Try(i+1,sum+a[i][j]); 
			used[j]=false;
		}
	}
}
int main(){
int t;cin>>t;
while(t--){
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	res=INT_MIN;
	Try(0,0);
	cout<<res;
	cout<<endl;
}
}

