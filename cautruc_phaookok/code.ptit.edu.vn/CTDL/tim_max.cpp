#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void in(ll a[], ll n)
{
    sort(a, a + n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += (a[i] * i);
    }
    sum %= mod;
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        in(a, n);
    }
}