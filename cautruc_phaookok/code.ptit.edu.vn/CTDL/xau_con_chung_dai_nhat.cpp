#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tmp[1005][1005];
string s1, s2;
ll n, m;
void nhap()
{
    cin >> s1 >> s2;
    for (ll i = 0; i < 1005; i++)
    {
        for (ll j = 0; j < 1005; j++)
            tmp[i][j] = 0;
    }
}
void in()
{
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            if (s1[i] == s2[j])
                tmp[i][j] = tmp[i - 1][j - 1] + 1;
            else
                tmp[i][j] = max(tmp[i - 1][j], tmp[i][j - 1]);
        }
    }
    cout << tmp[n][m] << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        nhap();
        n = s1.size();
        m = s2.size();
        s1 = ' ' + s1;
        s2 = ' ' + s2;
        in();
    }
    return 0;
}