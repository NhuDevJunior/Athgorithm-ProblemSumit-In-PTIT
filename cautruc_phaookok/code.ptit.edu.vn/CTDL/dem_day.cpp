#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 123456789;
ll n;
ll pow(ll a)
{
    if(a == 0)
        return 1%mod;
    if (a == 1)
        return 2%mod;
    ll x = pow(a/2);
    if (a % 2 == 0)
        return (x % mod * x % mod) % mod;
    return (x %mod * x % mod * 2 % mod) % mod;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        n--;
        cout << pow(n) << endl;
    }
    return 0;
}