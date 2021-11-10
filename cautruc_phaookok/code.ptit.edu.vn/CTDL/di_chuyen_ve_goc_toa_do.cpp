#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, m, tmp[100][100];

int main()
{
    memset(tmp, 0, sizeof(tmp));
    for (ll i = 0; i <= 25; i++)
    {
        for (ll j = 0; j <= 25; j++)
        {
            if (i == 0 || j == 0)
                tmp[i][j] = 1;
            else
                tmp[i][j] = tmp[i][j - 1] + tmp[i - 1][j];
        }
    }
    ll x;
    cin >> x;
    while (x--)
    {
        cin >> n >> m;
        cout << tmp[n][m] << endl;
    }
    return 0;
}