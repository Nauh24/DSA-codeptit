#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;cin>>t;
while(t--){
int n;cin>>n;
int a[n];
int ans=n;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1&&i<ans){
ans=i;
    }
}
cout<<ans;
    cout<<endl;
}
    system("pause");
}