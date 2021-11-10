#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, v, a[1005], c[1005], tmp[1005][1005], mx;

void nhap()
{
    cin >> n >> v;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
        cin >> c[i];
    for (ll i = 0; i < 1005; i++)
    {
        for (ll j = 0; j < 1005; j++)
            tmp[i][j] = 0;
    }
}
void in()
{    
    mx = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= v; j++)
        {
            if (j < a[i])
                tmp[i][j] = tmp[i - 1][j];
            else
                tmp[i][j] = max(tmp[i - 1][j], tmp[i - 1][j - a[i]] + c[i]);
            mx = max(tmp[i][j], mx);
        }
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