#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int d=INT_MAX;
int a[14],k[14],m[14];
for(int i=1;i<=12;i++) cin>>a[i];
for(int i=1;i<=12;i++) {
	m[i]=i/3 +(i%3>0);
}
do{
	memset(k,0,sizeof(k));
	for(int i=1;i<=12;i++) {
		k[m[i]]+=a[i];
	}
	sort(k+1,k+5);
	d=min(d,k[4]-k[1]);
}
while (next_permutation(m+1,m+13));
cout<<d;
}

