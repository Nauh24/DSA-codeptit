#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool isSign(string x){
    if(x=="+"||x=="-"||x=="*"||x=="/") return true;
    else return false;
}
int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<string> a(n);
for(int i=0;i<n;i++) cin>>a[i];
queue<ll> q;
for(int i=n-1;i>=0;i--){
    if(isSign(a[i])){
ll x=q.front(); q.pop();
ll y=q.front(); q.pop();
if(a[i]=="+") q.push(y+x);
if(a[i]=="-") q.push(y-x);
if(a[i]=="*") q.push(y*x);
if(a[i]=="/") q.push(y/x);

    }
    else {
q.push(stoll(a[i]));
    }
}
cout<<q.front();
    cout<<endl;
}
    system("pause");
}