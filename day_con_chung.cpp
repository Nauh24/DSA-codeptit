#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
vector<ll> v;
ll a[n],b[m],c[k];
for(int i=0;i<n;i++) cin>>a[i];
for(int j=0;j<m;j++) cin>>b[j];
for(int x=0;x<k;x++) cin>>c[x];
int i=0,j=0,x=0;
while(i<n&&j<m&&x<k){
    if(a[i]==b[j]&&a[i]==c[x]) v.push_back(a[i]);
    ll minn=min(a[i],min(b[j],c[x]));
    if(a[i]==minn) i++;
    if(b[j]==minn) j++;
    if(c[x]==minn) x++;
}
while(i<n&&j<m&&x<k){
    if(a[i]==b[j]&&a[i]==c[x]) v.push_back(a[i]);
}
if(v.size()==0) cout<<"NO";
else {
    for(auto it:v) cout<<it<<" ";
}
v.clear();
    cout<<endl;
}
    system("pause");
}