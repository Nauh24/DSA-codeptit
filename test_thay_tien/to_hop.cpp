#include <bits/stdc++.h>
using namespace std;
string s;
int k;
int n;
int a[21];
set<string> v;
bool check(string s)
{
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i + 1] < s[i])
			return false;
	}
	return true;
}
void Try(int i)
{
	for (int j = a[i - 1] + 1; j <= n - k + i; j++)
	{
		a[i] = j;
		if (i == k)
		{
			string res = "";
			for (int x = 1; x <= k; x++)
				res += s[a[x] - 1];
			if (check(res))
				v.insert(res);
		}
		else
			Try(i + 1);
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> s;
		cin >> k;
		sort(s.begin(), s.end());
		n = s.size();
		v.clear();

		Try(1);
		for (auto it : v)
			cout << it << endl;

		cout << endl;
	}
}