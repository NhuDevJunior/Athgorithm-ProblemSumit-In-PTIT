#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, h[100005], mx, x, y, tmp;
stack<ll> sta;
void nhap()
{
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> h[i];
}
void in()
{
	mx = 0;
	ll i = 0;
	while (i < n)
	{
		if (!sta.size() || h[sta.top()] <= h[i])
			sta.push(i++);
		else
		{
			x = sta.top();
			sta.pop();
			if (sta.size())
				y = sta.top();
			tmp = h[x] * (sta.empty() ? i : i - y - 1);
			mx = max(mx, tmp);
		}
	}
	while (sta.size())
	{
		x = sta.top();
		sta.pop();
		if (sta.size())
			y = sta.top();
		tmp = h[x] * (sta.empty() ? i : i - y - 1);
		mx = max(mx, tmp);
	}
	cout << mx << endl;
}
int main()
{
	cin >> t;
	while (t--)
	{
		nhap();
		in();
	}
	return 0;
}
