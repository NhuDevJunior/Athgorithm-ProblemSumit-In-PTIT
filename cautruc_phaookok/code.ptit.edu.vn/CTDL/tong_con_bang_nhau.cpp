//Quay lui - BackTrack liet ke cac to hop chap k phan tu cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, k, dem, X[100], a[100], b[100], flat;

void BackTrack(int sum)
{
    if(flat)
    return;
    if(dem == 2)
    {
        flat = 1;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!b[i])
        {
            b[i] = 1;
            if (sum == k)
            {
                dem++;
                return;
            }
            if (sum > k)
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
        k = 0, dem = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            b[i] = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            k += a[i];
        if (k % 2 != 0)
            cout << "NO" << endl;
        else
        {
            k /= 2;
            BackTrack(0);
            if (flat)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}