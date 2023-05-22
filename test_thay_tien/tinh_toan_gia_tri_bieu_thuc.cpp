#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(string s){
	return stoll(s);
}
int main(){
int t;cin>>t;
while(t--){
	int n;cin>>n;
	string a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stack<ll> st;
	if(a[0]=="+"||a[0]=="-"||a[0]=="*"||a[0]== "/"){
		for(int i=n-1;i>=0;i--){
			if(a[i]=="+"||a[i]=="-"||a[i]=="*"||a[i]== "/"){
				ll x=st.top(); st.pop();
				ll y=st.top(); st.pop();
				if(a[i]=="+") st.push(x+y);
				if(a[i]=="-") st.push(x-y);
				if(a[i]=="*") st.push(x*y);
				if(a[i]=="/") st.push(x/y);
			}
			else st.push(solve(a[i]));
		}
	}
	else{
		for(int i=0;i<n;i++){
			if(a[i]=="+"||a[i]=="-"||a[i]=="*"||a[i]== "/"){
				ll x=st.top(); st.pop();
				ll y=st.top(); st.pop();
				if(a[i]=="+") st.push(x+y);
				if(a[i]=="-") st.push(y-x);
				if(a[i]=="*") st.push(x*y);
				if(a[i]=="/") st.push(y/x);
			}
			else st.push(solve(a[i]));
		}
	}
	cout<<st.top();
	cout<<endl;
}
}
