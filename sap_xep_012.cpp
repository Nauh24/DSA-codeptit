#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;cin>>t;
while(t--){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);
for(auto it:a) cout<<it<<" ";
    cout<<endl;
}
    system("pause");
}