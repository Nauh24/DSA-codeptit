#include<bits/stdc++.h>
using namespace std;
#define ll long long
string solve(string s){
	string ans="";
	stack<char> st;
	int ok=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('||s[i]==')'){
			if(s[i]=='('){
				if(!st.empty()&&st.top()=='-') ok=1;
				else ok=0; 
			}
			else ok=0;
		}
		else if(s[i]=='+'||s[i]=='-'){
			if(ok==1){
				if(s[i]=='+') st.push('-');
				else st.push('+');
			}
			else st.push(s[i]);
			ans+=st.top();
		}
		else {
			st.push(s[i]);
			ans+=st.top();
		}
	}
	return ans;
}
int main(){
int t;cin>>t;
while(t--){
	string s1,s2;
	cin>>s1>>s2;
	if(solve(s1)==solve(s2)) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}	
	
}
