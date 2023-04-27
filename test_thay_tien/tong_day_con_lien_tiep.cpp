#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;cin>>t;
while(t--){
	int n;cin>>n;
	int a[n];
	ll s=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	ll x=0;
	int k=0;
	ll ans;
	for(int i=0;i<n;i++){
		x+=a[i];
		if(s%x==0){
			ll w=0;
			k=1;
			for(int j=i+1;j<n;j++){
				if(w<x){
					w+=a[j];
				}
				if(w==x){
					k++;
					w=0;
				}
				 if(w>x) {
					w=0;
					break;
				}
			}
			if(s/x==k) {
				ans=x;
				break;
			}
		}
	}
	cout<<ans;
	cout<<endl;
}
}

