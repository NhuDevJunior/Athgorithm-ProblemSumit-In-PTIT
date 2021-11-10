#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fi[1000][1000];
string a, b;
ll n;

void chung()
{
    b = a;
    fi[1000][1000];
    for (ll i = 0; i < 1000; i++)
    {
        for (ll j = 0; j < 1000; j++)
            fi[i][j] = 0;
    }
    n = a.size();
    a = ' ' + a;
    b = ' ' + b;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (a[i] == b[j] && i != j)
                fi[i][j] = fi[i - 1][j - 1] + 1;
            else
                fi[i][j] = max(fi[i - 1][j], fi[i][j - 1]);
        }
    }
    cout << fi[n][n] << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin>>n>>a;
        chung();
    }
    return 0;
}