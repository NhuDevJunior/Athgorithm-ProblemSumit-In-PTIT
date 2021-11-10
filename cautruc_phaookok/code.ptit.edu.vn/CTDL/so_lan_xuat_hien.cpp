#include <bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void in(int a[], int n, int x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            dem++;
    }
    if (dem != 0)
        cout << dem << endl;
    else
        cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n + 5];
        nhap(a, n);
        in(a, n, x);
    }
}