//Quay lui - BackTrack liet ke cac xau nhi phan
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, k, dem, s[100], a[1000000];

void print()
{
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
        sum = sum*10+s[i];
    a[dem++] = sum;
}
void BackTrack(ll i)
{
    for (ll j = 8; j >= 6; j -= 2)
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
    cin >> t;
    while (t--)
    {
        cin >> n;
        dem = 0;
        while (n)
        {
            BackTrack(1);
            n--;
        }
        sort(a, a + dem);
        cout << dem << endl;
        for (ll i = dem-1; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}