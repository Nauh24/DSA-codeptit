#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int a[11];
bool used[11];
vector<string> v;
void Try(int i){
	for(int j=1;j<=n;j++){
	if(!used[j]){
		a[i]=j;
		used[j]=true;
		if(i==n){
			string res="";
			for(int k=1;k<=n;k++){
				res+=to_string(a[k])+" ";
			}
			v.push_back(res);
//for(int k=1;k<=n;k++) cout<<a[k]<<" ";
//cout<<endl;
		}
		else Try(i+1);
		used[j]=false;
	}
	}
}

int main(){
cin>>n>>m;
Try(1);
for(int i=1;i<=v.size();i++){
	if(i%m==0) cout<<v[i-1]<<endl;
}
}

