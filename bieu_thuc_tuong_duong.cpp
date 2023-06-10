#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		stack<char> st;
		string ans="";
		int ok=0;
		for(int i=0;i<s.size();i++){
			if(s[i]>='a'&&s[i]<='z'){
				st.push(s[i]);
			ans+=st.top();
			} 
			else if(s[i]=='+'||s[i]=='-'){
				if(ok==1) {
					if(s[i]=='+') st.push('-');
					else st.push('+');
				}
				else st.push(s[i]);
			ans+=st.top();
			}
			else {
				if(s[i]=='('){
					if(!st.empty()&&st.top()=='-') ok=1;
					else ok=0;
				}
				else ok=0;
			}
			
		}
		cout<<ans;
		cout<<endl;
	}
	
}
