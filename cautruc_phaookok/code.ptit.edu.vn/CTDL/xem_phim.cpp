#include <bits/stdc++.h>
using namespace std;
int n, k, a[105], tmp[25005];
int main()
{
    for (int i = 0; i < 25005; i++)
        tmp[i] = 0;
    cin >> k >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    tmp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        tmp[x] = 1;
        for (int j = k; j >= x; j--)
        {
            if (tmp[j - x] && (j - x) != x)
                tmp[j] = 1;
        }
    }
    for (int i = k; i >= 0; i--)
    {
        if (tmp[i])
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}