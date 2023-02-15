#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n;cin>>n;
vector<int > a(n);
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n-1;i++){
    cout<<"Buoc "<<i+1<<": ";
int min_pos=i;
for(int j=i+1;j<n;j++){
    if(a[min_pos]>a[j]){
        min_pos=j;
    }
}
swap(a[min_pos],a[i]);
for(auto it:a) cout<<it<<" ";
cout<<endl;
}
    system("pause");
}