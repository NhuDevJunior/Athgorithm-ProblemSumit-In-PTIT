#include <bits/stdc++.h>
using namespace std;

int t, n, m, tmp[105][105], mn;
string a, b;
void nhap()
{
    cin >> a >> b;
    n = a.size();
    m = b.size();
}
void in()
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                tmp[i][j] = i + j;
            else if (a[i - 1] == b[j - 1])
                tmp[i][j] = tmp[i - 1][j - 1];
            else
            {
                tmp[i][j] = min(tmp[i - 1][j], tmp[i][j - 1]);
                tmp[i][j] = min(tmp[i][j], tmp[i - 1][j - 1]) + 1;
            }
        }
    }
    cout << tmp[n][m] << endl;
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