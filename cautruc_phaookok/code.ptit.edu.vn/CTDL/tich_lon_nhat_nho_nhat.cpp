#include <bits/stdc++.h>
using namespace std;

long long t, n, m, a[1000005], b[1000005];

void nhap()
{
    cin >> n >> m;
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    for (long long i = 0; i < m; i++)
        cin >> b[i];
}
void in()
{
    sort(a, a + n);
    sort(b, b + m);
    cout << a[n - 1] * b[0] << endl;
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