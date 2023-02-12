#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;cin>>t;
while(t--){
ll n,k;cin>>n>>k;
ll a[n];
bool check=false;
ll ans;
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==k){
        check=true;
ans=i+1;
    }
}
if(!check) cout<<"NO";
else cout<<ans;
    cout<<endl;
}
    system("pause");
}