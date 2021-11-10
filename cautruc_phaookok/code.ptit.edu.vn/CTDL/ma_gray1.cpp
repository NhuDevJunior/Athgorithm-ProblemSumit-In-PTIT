#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, m, n, arr[100005], tmp[100005];
void xuat()
{
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        int u = arr[i];
        while (u > 0)
        {
            tmp[k++] = u % 2;
            u /= 2;
        }
        for (int j = k + 1; j <= m; j++)
            cout<<0;
        while (k >= 1)
            cout<<tmp[--k];
        cout<<" ";
    }
    cout<<endl;
}

void nhap()
{
    cin >> m;
    arr[0] = 0;
    arr[1] = 1;
    int p = 1;
    n = 2;
    for (int i = 2; i <= m; i++)
    {
        p = p * 2;
        int u = 2 * n - 1;
        for (int j = n; j <= u; j++)
            arr[j] = arr[u - j] + p;
        n = n * 2;
    }
}

int main()
{
    cin>>t;
    while (t--)
    {
        nhap();
        xuat();
    }
    return 0;
}