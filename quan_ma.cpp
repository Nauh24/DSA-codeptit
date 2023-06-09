#include<bits/stdc++.h>
using namespace std;
#define ll long long
	string s1,s2;
	char c,s;
	int cot[8] ={-1,1,-2,2,-1,1,-2,2};
	int hang[8] ={2,2,1,1,-2,-2,-1,-1};
		bool vs[9][9];
	int cnt;
	void Bfs(){
		queue<pair<char,char>> q;
		q.push({c,s});
		vs[c][s]=true;
		while(!q.empty()){
			int len=q.size();
			while(len--){
			char a=q.front().first;
			char b=q.front().second;
			 if(a==s2[0]&&b==s2[1]){
			 cout<<cnt;
			 	return;
			 }
			 q.pop();
			 for(int i=0;i<8;i++){
			char x=a+cot[i];
			char y=b+hang[i];
			if(x>='a'&&x<='h'&&y>='1'&&y<='8'&&!vs[x][y]){
				q.push({x,y});
				vs[x][y]=true;
			} 
			 }
			 
			}
		cnt++;
		}
	}
int main(){
int t;cin>>t;
while(t--){

	cin>>s1>>s2;
	c=s1[0],s=s1[1];
	cnt=0;
for(char i='a';i<='h';i++){
	for(char j='1';j<='8';j++) vs[i][j]=false;
}
	Bfs();
	cout<<endl;
}
}
