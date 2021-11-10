#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b;

ll so5(ll a)
{
    ll last, sum = 0;
    while (a)
    {
        last = a % 10;
        if (last == 6)
            last = 5;
        sum = sum * 10 + last;
        a /= 10;
    }
    last = 0;
    while (sum)
    {
        last = last * 10 + (sum % 10);
        sum /= 10;
    }
    return last;
}
ll so6(ll a)
{
    ll last, sum = 0;
    while (a)
    {
        last = a % 10;
        if (last == 5)
            last = 6;
        sum = sum * 10 + last;
        a /= 10;
    }
    last = 0;
    while (sum)
    {
        last = last * 10 + (sum % 10);
        sum /= 10;
    }
    return last;
}
void in()
{
    ll x = so5(a);
    ll y = so5(b);
    cout << x + y << " ";
    x = so6(a);
    y = so6(b);
    cout << x + y << endl;
}
int main()
{
    cin >> a >> b;
    in();
    return 0;
}