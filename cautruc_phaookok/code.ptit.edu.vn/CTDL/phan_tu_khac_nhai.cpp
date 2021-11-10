#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n + 5], b[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        if (n == 1)
            cout << 1 << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                {
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}