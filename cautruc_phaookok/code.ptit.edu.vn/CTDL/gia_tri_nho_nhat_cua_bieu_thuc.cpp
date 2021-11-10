#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n;
priority_queue<ll, vector<ll>, greater<ll> > a;
priority_queue<ll, vector<ll> > b;

void nhap()
{
    cin >> n;
    ll k;
    for (ll i = 0; i < n; i++)
    {
        cin >> k;
        a.push(k);
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> k;
        b.push(k);
    }
}
void in()
{
    ll sum = 0;
    while (a.size())
    {
        sum += a.top() * b.top();
        a.pop(), b.pop();
    }
    cout << sum << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        in();
    }
    return 0;
}
