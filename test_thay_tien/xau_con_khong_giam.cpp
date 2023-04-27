#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
string s;cin>>s;
int n=s.size();
vector<int> d(n,1);
//memset(d,1,sizeof(d));
//d[0]=1;
int maxx=1;
for(int i=1;i<n;i++){
	for(int j=0;j<i;j++){
		if(s[j]<=s[i]){
			d[i]=max(d[i],d[j]+1);
		}
	}
	maxx=max(maxx,d[i]);
}
cout<<maxx<<endl;
}

