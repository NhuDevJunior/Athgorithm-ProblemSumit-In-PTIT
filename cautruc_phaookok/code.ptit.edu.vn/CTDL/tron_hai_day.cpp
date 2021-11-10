#include <bits/stdc++.h>
using namespace std;

long long t, n, m, a[1000005], b[1000005], c[2000005];

void nhap()
{
    cin >> n >> m;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        c[i] = a[i];
    }
    for (long long i = 0; i < m; i++)
    {
        cin >> b[i];
        c[n + i] = b[i];
    }
}
void in()
{
    sort(c, c + n + m);
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
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