#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dd(ll n, ll k)
{
    if (k % 2 == 1)
        return 1;
    ll p = pow(2, n - 1);
    if (p == k)
        return n;
    if (p < k)
        return dd(n - 1, k - p);
    return dd(n - 1, k);
}
int main()
{
    ll x;
    cin >> x;
    while (x--)
    {
        ll n, k;
        cin >> n >> k;
        cout << dd(n, k) << endl;
    }
}