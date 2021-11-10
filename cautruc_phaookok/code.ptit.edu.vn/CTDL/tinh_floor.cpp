#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void in(ll a[], ll n, ll k)
{
    ll *p = upper_bound(a, a + n, k);
    if (p - a == 0)
        cout << -1 << endl;
    else
        cout << p - a << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        in(a, n, k);
    }
}