#include <bits/stdc++.h>
using namespace std;

int t, n, k, a[1000];
void nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void in()
{
    int mi = abs(a[0] + a[1]), min;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mi > abs(a[i] + a[j]))
            {
                mi = abs(a[i] + a[j]);
                min = a[i] + a[j];
            }
        }
    }
    cout << min << endl;
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