#include <bits/stdc++.h>
using namespace std;

int t, n, m, k, l, a[1000005], b[1000005], c[2000005];
void nhap()
{
    l = 0;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[l++] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        c[l++] = b[i];
    }
}
void in()
{
    sort(c, c + l);
    cout << c[k - 1] << endl;
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