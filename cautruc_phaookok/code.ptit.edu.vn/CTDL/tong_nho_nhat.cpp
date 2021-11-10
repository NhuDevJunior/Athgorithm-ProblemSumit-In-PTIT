#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void in(ll a[], ll n)
{
    sort(a, a + n);
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum1 = sum1 * 10 + a[i];
        else
            sum2 = sum2 * 10 + a[i];
    }
    cout << sum1 + sum2 << endl;
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