#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		stringstream ss(s1);
		string tmp;
		vector<string> v;
		while(ss>>tmp){
		if(tmp!="+")	v.push_back(tmp);
		}
		stringstream ss2(s2);
		string tmp2;
		while(ss2>>tmp2){
			if(tmp2!="+") v.push_back(tmp2);
		}
		map<int,int> mp;
		for(auto it:v){
			stack<string> st;
				string so="";
				string mu="";
				int ok=0;
			for(int i=0;i<it.size();i++){
			if(isdigit(it[i])){
				if(ok==0) so+=it[i];
				else mu+=it[i];
			} 
			else ok=1;
			}
			mp[stoi(mu)]+=stoi(so);
		//	cout<<so<<" "<<mu<<endl;
		} 
		vector<pair<int,int>> res;
//		for(auto it:mp){
//			cout<<it.first<<" "<<it.second<<endl;
//		}
		for(auto it:mp) res.push_back(it);
		for(int i=res.size()-1;i>=0;i--){
			cout<<res[i].second<<"*x^"<<res[i].first;
			if(i!=0) cout<<" + ";
//cout<<res[i].second<<" "<<res[i].first<<endl;
		}
		cout<<endl;
	}
	
}
/*
1
3*x^8 + 7*x^2 + 4*x^0
11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
*/
