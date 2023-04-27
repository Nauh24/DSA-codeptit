#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int dem=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='2') dem++;
	}
	if(dem>s.size()/2) return true;
	else return false;
}
int main(){
	int t;cin>>t;
	queue<string> q;
	vector<string> v;
	q.push("1");
	q.push("2");
//	v.push_back("2");
	while(v.size()<1000){
		string x=q.front();
		q.pop();
		if(check(x)) v.push_back(x);
		q.push(x+"0");
		q.push(x+"1");
		q.push(x+"2");
	}
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++) cout<<v[i]<<" ";
		cout<<endl;
	}
	
}
