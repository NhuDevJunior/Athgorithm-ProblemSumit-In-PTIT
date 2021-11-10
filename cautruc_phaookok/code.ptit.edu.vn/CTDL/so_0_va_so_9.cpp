//Quay lui - BackTrack liet ke cac xau nhi phan
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, k, flat, s[100], a[1000000];

void print()
{
    if(flat)
    return;
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
        sum = sum*10+s[i];
    if(sum % k == 0 && sum != 0)
    {
        cout<<sum<<endl;
        flat = 1;
    }
}
void BackTrack(ll i)
{
    if(flat)
    return;
    for (ll j = 0; j <= 9; j += 9)
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
        flat = 0;
        cin >> k;
        n = 1;
        while (n <= k)
        {
            BackTrack(1);
            ++n;
        }
    }
    return 0;
}