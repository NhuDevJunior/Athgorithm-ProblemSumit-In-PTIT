#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll a, b;
ll pow(ll a, ll b)
{
    if (b == 1)
        return a;
    ll x = pow(a, b / 2);
    if (b % 2 == 0)
        return (x % mod * x % mod) % mod;
    return (x %mod * x % mod * a % mod) % mod;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << pow(a, b) << endl;
    }
}