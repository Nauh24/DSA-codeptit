#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n,k;
cin>>n>>k;
ll a[n+1];
priority_queue<ll,vector<ll>,greater<ll>> q;
for(int i=1;i<=n;i++){
	cin>>a[i];
	q.push(a[i]);
}
ll sum;
ll chiphi=0;
while(1){
	if(q.size()==1) break;
	else if(q.size()>=k){
		ll Min=INT_MAX;
		ll Max=INT_MIN;
		sum=0;
		for(int i=1;i<=k;i++){
			ll x=q.top();
			q.pop();
			Min=min(Min,x);
			Max=max(Max,x);
			sum+=x;
		}
		q.push(sum);
		chiphi+=(Max-Min);
	}
	else {
		sum=0;
		ll Min=INT_MAX;
		ll Max=INT_MIN;
		while(!q.empty()){
			ll y=q.top();
			q.pop();
			sum+=y;
			Min=min(Min,y);
			Max=max(Max,y);
		}
		q.push(sum);
		chiphi+=(Max-Min);
	}
}
cout<<q.top()<<endl;
cout<<chiphi;
}

