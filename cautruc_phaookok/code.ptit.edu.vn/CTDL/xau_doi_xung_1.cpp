#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tmp[1005][1005];
string a, b;
ll n, m, t;
void nhap()
{
    cin >> a;
    b = a;
    reverse(b.begin(), b.end());
    for (ll i = 0; i < 1005; i++)
    {
        for (ll j = 0; j < 1005; j++)
            tmp[i][j] = 0;
    }
}
void in()
{
    n = a.size();
    m = b.size();
    a = ' ' + a;
    b = ' ' + b;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            if (a[i] == b[j])
                tmp[i][j] = tmp[i - 1][j - 1] + 1;
            else
                tmp[i][j] = max(tmp[i - 1][j], tmp[i][j - 1]);
        }
    }
    cout << n - tmp[n][m] << endl;
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