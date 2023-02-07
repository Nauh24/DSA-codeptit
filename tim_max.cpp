#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
int main()
{
int t;cin>>t;
while(t--){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
ll sum=0;
for(ll i=0;i<n;i++){
    sum+=a[i]*i;
}
cout<<sum%mod;
    cout<<endl;
}
    system("pause");
}