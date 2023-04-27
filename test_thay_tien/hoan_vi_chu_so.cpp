#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
bool used[10];
int a[10];
string s;
void solve(){
	if(s[a[1]-1]!='0') cout<<s[a[1]-1];
		for(int i=2;i<=n;i++){
			
		cout<<s[a[i]-1];

	}
	cout<<endl;	
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i]=j;
			used[j]=true;
			if(i==n) {
				solve();
				
				cout<<endl;
			}
			else Try(i+1);
			used[j]=false;
		}
	}
}
int main(){
int t;cin>>t;
while(t--){

	cin>>s;
	sort(s.begin(),s.end());
	n=s.size();
	Try(1);

	cout<<endl;
}
}

