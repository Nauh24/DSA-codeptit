#include<bits/stdc++.h>
using namespace std;
int n;
string s;
string ans;
vector<string> v;
int used[11]={0};
int a[11];
string res;
void solve(){
for(int i=1;i<=n;i++){
	cout<<v[a[i]-1]<<" ";
}
cout<<endl;
}
void Try(int i){
for(int j=1;j<=n;j++){
    if(used[j]==0){
used[j]=1;
a[i]=j;
if(i==n){
	if(v[a[n]-1]==ans)
    solve();
 // for(int j=1;j<=n;j++) cout<<a[j]<<" ";
  cout<<endl;
}
else Try(i+1);
used[j]=0;

    }
}
}
int main(){
    cin>>n;
for(int i=1;i<=n;i++){
    cin>>s;
    v.push_back(s);
}
cin>>ans;
sort(v.begin(),v.end());
Try(1);
//for(auto it:v) cout<<it<<" ";
cout<<endl;
system("pause");
}
