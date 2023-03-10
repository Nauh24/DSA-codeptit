#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
ll cnt;
ll f[46];
ll f2[46];
void Try(int n,int k){
	if(k==f2[n]){
		cnt+=f[n];
		return ;
	} 
	if(k<=f2[n-1]){
		Try(n-1,k);
	}
	else {
		cnt+=f[n-1];
		k-=f2[n-1];
		Try(n-2,k);
	}
}
int main()
{
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=46;i++){
		f[i]=f[i-1]+f[i-2];
	}
	f2[0]=1;
	f2[1]=1;
	for(int i=2;i<=46;i++){
		f2[i]=f2[i-1]+f2[i-2];
	}
	
int t;cin >>t;
 while(t--){
cin>>n>>k;
cnt=0;
//cout<<f[n];
Try(n,k);
cout<<cnt;
//cout<<Try(n,k);
   
 cout<<endl;
 }
}
/*

*/
/*

*/#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

}

