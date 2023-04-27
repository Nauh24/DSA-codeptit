#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
char a[100][100];
int cnt;
int h[4]={-1,1,0,0};
int c[4]={0,0,-1,1};

void Try(int i,int j){
		a[i][j]='0';
	for(int k=0;k<4;k++){
	int 	i1=i+h[k];
		int j1=j+c[k];
		if(i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]=='#'){
			Try(i1,j1);
		}
	}
}
int main(){
cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='#'){
				cnt++;
				
				Try(i,j);
			}
		}
	}
	cout<<cnt<<endl;
}
