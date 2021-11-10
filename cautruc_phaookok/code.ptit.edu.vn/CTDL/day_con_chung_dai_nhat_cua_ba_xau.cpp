#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 105;
ll fi[mx][mx][mx];
string a, b, c;
ll n, m, p;

ll chung()
{
    for (ll i = 0; i < mx; i++)
    {
        for (ll j = 0; j < mx; j++)
        {
            for (ll l = 0; l < mx; l++)
                fi[i][j][l] = 0;
        }
    }
    a = ' ' + a;
    b = ' ' + b;
    c = ' ' + c;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            for (ll l = 1; l <= p; l++)
            {
                if (a[i] == b[j] && a[i] == c[l])
                    fi[i][j][l] = fi[i - 1][j - 1][l - 1] + 1;
                else
                {
                    fi[i][j][l] = max(fi[i - 1][j][l], fi[i][j - 1][l]);
                    fi[i][j][l] = max(fi[i][j][l], fi[i][j][l - 1]);
                }
            }
        }
    }
    return fi[n][m][p];
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> n >> m >> p;
        cin >> a >> b >> c;
        cout << chung() << endl;
    }
    return 0;
}