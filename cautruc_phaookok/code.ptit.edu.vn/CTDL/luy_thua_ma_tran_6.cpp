#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll m = 1e9 + 7;
ll n, k;
struct matran
{
    ll mt[100][100];
};
matran a;

matran operator*(matran a, matran b)
{
    matran c;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            c.mt[i][j] = 0;
            for (ll p = 0; p < n; p++)
                c.mt[i][j] = (c.mt[i][j] + (a.mt[i][p] * b.mt[p][j]) % m) % m;
        }
    }
    return c;
}
matran nhan(matran a, ll k)
{
    if (k == 1)
        return a;
    matran c = nhan(a, k / 2);
    if (k % 2 == 0)
        return c * c;
    return c * c * a;
}
void nhap()
{
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
            cin >> a.mt[i][j];
    }
}

int main()
{
    ll x;
    cin >> x;
    while (x--)
    {
        cin >> n >> k;
        nhap();
        matran c = nhan(a, k);
        ll sum = 0;
        for(ll i = 0; i < n; i++)
        {
            sum +=c.mt[i][0];
        }
        sum%=m;
        cout<<sum<<endl;
    }
    return 0;
}