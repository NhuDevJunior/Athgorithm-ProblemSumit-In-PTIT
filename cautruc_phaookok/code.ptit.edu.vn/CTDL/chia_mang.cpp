//Quay lui - BackTrack liet ke cac to hop chap k phan tu cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, k, s, dem, X[100], a[100], b[100], flat;

void BackTrack(int sum)
{
    if (flat)
        return;
    if (dem == k)
    {
        flat = 1;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!b[i])
        {
            b[i] = 1;
            if (sum == s)
            {
                dem++;
                return;
            }
            if (sum > s)
                return;
            else
                BackTrack(sum + a[i]);
        }
        b[i] = 0;
    }
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        dem = 0, s = 0;
        cin >> n >> k;
        memset(b, 0, sizeof(b));
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            s += a[i];
        if (s % k != 0)
            cout << 0 << endl;
        else
        {
            s /= k;
            BackTrack(0);
            if (flat)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
    return 0;
}