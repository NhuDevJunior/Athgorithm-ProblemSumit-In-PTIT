#include <bits/stdc++.h>
using namespace std;

int t, n, v, a[105], c[105];

void nhap()
{
    cin >> n >> v;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> c[i];
}
int main()
{
    nhap();
    int dp[105][105];
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
            dp[i][j] = 0;
    }
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            if (j < a[i])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + c[i]);
            mx = max(dp[i][j], mx);
        }
    }
    cout << mx << endl;
    return 0;
}