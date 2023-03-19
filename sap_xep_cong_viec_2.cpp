#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Job{
	int id,deadline,profit;
};
bool cmp(Job a,Job b){
	return a.deadline>b.deadline;
}
int main(){
int t;cin>>t;
while(t--){
	int n;cin>>n;
	Job a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i].id>>a[i].deadline>>a[i].profit;
	}
	sort(a,a+n,cmp);
	priority_queue <int> pq;
	int cur=a[0].deadline;
	int index=0,cnt=0,sum=0;
	for(int i=cur;i>=1;i--){
		while(index<n&&a[index].deadline>=i){
			pq.push(a[index].profit);
			index++;
		}
		if(!pq.empty()){
			sum+=pq.top();
			cnt++;
			pq.pop();
		}
	}
	cout<<cnt<<" "<<sum;
	cout<<endl;
}
}
