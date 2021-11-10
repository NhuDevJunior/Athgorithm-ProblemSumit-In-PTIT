#include <bits/stdc++.h>
using namespace std;
int t, n, a[100], b[100], c[10000], x;
void nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void tinh(int a[], int b[], int n)
{
    int k = n - 1;
    for (int i = 0; i < k; i++)
        b[i] = a[i] + a[i + 1];
    for (int i = 0; i < k; i++)
        a[i] = b[i];
}
void in(int a[], int n)
{
    for (int i = 0; i < n; i++)
        c[x++] = a[i];
}
void check()
{
    x = 0;
    int p = n;
    while (n)
    {
        in(a, n);
        tinh(a, b, n);
        n--;
    }
    for (int i = 1; i <= p; i++)
    {
        cout << "[";
        for (int j = i; j >= 1; j--)
        {
            if (j != 1)
                cout << c[x - j] << " ";
            else
                cout << c[x - j] << "]";
        }
        x -= i;
        cout << " ";
    }
    cout << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        check();
    }
    return 0;
}