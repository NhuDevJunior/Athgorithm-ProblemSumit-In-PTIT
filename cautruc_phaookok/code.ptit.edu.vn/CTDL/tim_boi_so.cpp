//Quay lui - BackTrack liet ke cac xau nhi phan
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, x, k, dem, s[100000], a[100000];

void print()
{
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
        sum = sum * 10 + s[i];
    a[dem++] = sum;
}
void BackTrack(ll i)
{
    for (ll j = 9; j >= 0; j -= 9)
    {
        s[i] = j;
        if (i == n)
            print();
        else
            BackTrack(i + 1);
    }
    return;
}
int main()
{
    n = 15;
    dem = 0;
    while (n)
    {
        BackTrack(1);
        n--;
    }
    sort(a, a + dem);
    cin >> t;
    while (t--)
    {
        cin >> x;
        for (ll i = 0; i < dem; i++)
        {
            if (a[i] != 0 && a[i] % x == 0)
            {
                cout << a[i] << endl;
                break;
            }
        }
    }
    return 0;
}