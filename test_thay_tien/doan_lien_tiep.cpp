#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;cin>>t;
while(t--){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stack<int> st;
	for(int i=0;i<n;i++){
		while(!st.empty()&&a[st.top()]<=a[i]){
			st.pop();
		}
		if(st.empty()) cout<<i+1;
		else cout<<i-st.top();
		cout<<" ";
		st.push(i);
	}
	
	cout<<endl;
}
}

