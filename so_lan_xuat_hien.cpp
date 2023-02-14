#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;cin>>t;
while(t--){
int n,x;
cin>>n>>x;
int a[n];
map<int,int> mp;
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
if(mp[x]==0) cout<<-1;
else cout<<mp[x];
    cout<<endl;
}
    system("pause");
}