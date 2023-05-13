#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;cin>>t;
while(t--){
char c;
stack<char> st;
while(cin>>c){
	if(c=='.') break;
	if(c=='('||c==')'||c=='['||c==']'){
		if(!st.empty()&&c==')'&&st.top()=='(') st.pop();
	else if(!st.empty()&&c==']'&&st.top()=='[') st.pop();
	else st.push(c);
	}
	
}
if(st.empty()) cout<<"YES";
else cout<<"NO";
	cout<<endl;
}
}

