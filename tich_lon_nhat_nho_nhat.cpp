#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;cin>>t;
while(t--){
int n,m;
cin>>n>>m;
ll a[n],b[m];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<m;i++) cin>>b[i];
ll maxx=*max_element(a,a+n);
ll minn=*min_element(b,b+m);
cout<<maxx*minn;
    cout<<endl;
}
    system("pause");
}