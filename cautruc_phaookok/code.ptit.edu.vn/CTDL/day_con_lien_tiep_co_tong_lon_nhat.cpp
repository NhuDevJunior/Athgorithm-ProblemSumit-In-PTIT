#include <bits/stdc++.h>
using namespace std;

int t, n, a[100];

void nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void in()
{
    int sum = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum < 0)
            sum = 0;
        else
            mx = max(sum, mx);
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