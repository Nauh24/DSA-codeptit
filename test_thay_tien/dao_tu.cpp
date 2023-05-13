#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;cin>>t;
cin.ignore();
while(t--){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string tmp;
	stack<char> st;
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	for(auto it:v){
		for(auto x:it){
			st.push(x);
		}
		while(!st.empty()){
			cout<<st.top();
			st.pop();
		}
		cout<<" ";
	}
//	for(auto it:v) cout<<it<<" ";
	cout<<endl;
	
}
}

