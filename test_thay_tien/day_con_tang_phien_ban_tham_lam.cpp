#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
int n;cin>>n;
ll a[n];
vector<ll> v;
ll ans;
for(int i=0;i<n;i++) {
	cin>>a[i];
	v.push_back(a[i]);
}
bool vs[n];
int cnt=0;
int ok=0;
while(cnt<n){
	ans=INT_MIN;
	for(int i=0;i<v.size();i++){
		if(v[i]>ans&&!vs[i]){
			ans=v[i];
			cout<<v[i]<<" ";
			vs[i]=true;
			cnt++;
		}
	}
	cout<<endl;
}
}
