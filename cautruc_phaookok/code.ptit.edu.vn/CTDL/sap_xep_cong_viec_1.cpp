#include <bits/stdc++.h>
using namespace std;

int t, n, k, a[1005], b[1005];

void nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
}
void sX()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
}
void in()
{
    int dem = 1, i = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[j] >= b[i])
        {
            dem++;
            i = j;
        }
    }
    cout << dem << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        sX();
        in();
    }
    return 0;
}