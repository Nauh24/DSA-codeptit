
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
        cin >> n;
        vector<pair<ll, ll>> v(n);
      for(int i=0;i<n;i++){
      	cin>>v[i].first>>v[i].second;
	  }
        ll d[n][2];
        d[0][1] = v[0].second;
        d[0][0] = 0;
        for(int i = 1; i < n; i++)
        {
            if(v[i].first != v[i - 1].first)
            {
            	   d[i][0] = min(d[i - 1][0], d[i - 1][1]);
                d[i][1] = min(d[i - 1][0], d[i - 1][1]) + v[i].second;
                
            }
            else
            {
            	      d[i][0] = d[i - 1][1];
             d[i][1] = min(d[i - 1][0], d[i - 1][1]) + v[i].second;
          
            }
        }
        cout << min(d[n - 1][0], d[n - 1][1]) << endl;
    }

}

