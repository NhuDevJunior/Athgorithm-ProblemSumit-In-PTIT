#include <bits/stdc++.h>
using namespace std;

int t, n, a[1000], tmp[1000];

void nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void in()
{
    tmp[0] = a[0];
    int tmp_max = a[0];
    for (int i = 1; i < n; i++)
    {
        tmp[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                tmp[i] = max(tmp[i], tmp[j] + a[i]);
        }
        tmp_max = max(tmp_max, tmp[i]);
    }
    cout << tmp_max << endl;
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