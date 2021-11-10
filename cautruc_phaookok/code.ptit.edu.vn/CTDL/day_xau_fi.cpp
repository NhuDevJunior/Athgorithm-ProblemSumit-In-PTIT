#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Fi[100], t, n, k;

string in(ll n, ll k)
{
    if (n == 1)
        return "A";
    if (n == 2)
        return "B";
    if (k <= Fi[n - 2])
        return in(n - 2, k);
    return in(n - 1, k - Fi[n - 2]);
}
int main()
{
    Fi[0] = 0;
    Fi[1] = 1;
    for (ll i = 2; i <= 92; i++)
        Fi[i] = Fi[i - 1] + Fi[i - 2];
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << in(n, k) << endl;
    }
    return 0;
}