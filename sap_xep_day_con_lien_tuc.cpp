#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;cin>>t;
while(t--){
int n;cin>>n;
int a[n],b[n];
for(int i=1;i<=n;i++){
    cin>>a[i];
    b[i]=a[i];
}
sort(b,b+n);
int l,r;
for(int i=1;i<=n;i++){
    if(a[i]!=b[i]){
l=i;
break;
    }
}
for(int i=n;i>=1;i--){
    if(a[i]!=b[i]){
        r=i;
        break;
    }
}
cout<<l<<" "<<r;
    cout<<endl;
}
    system("pause");
}