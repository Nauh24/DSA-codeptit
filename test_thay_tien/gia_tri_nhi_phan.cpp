#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll n,q;
cin>>n>>q;
int a[n+1]={0};
while(q--){
	ll x,y;
	cin>>x>>y;
	for(ll i=x;i<=y;i++){
		a[i]=1-a[i];
	}
}
for(ll i=1;i<=n;i++) cout<<a[i]<<" ";
cout<<endl;
}

