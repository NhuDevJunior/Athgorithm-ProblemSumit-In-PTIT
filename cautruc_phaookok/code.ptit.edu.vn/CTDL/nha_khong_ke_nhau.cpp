#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6 + 5;
int t, n, a[N], tmp[N];

void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}
void in()
{
    tmp[1] = a[1];
    tmp[2] = max(a[1], a[2]);
    for (int i = 3; i <= n; i++)
        tmp[i] = max(tmp[i - 2] + a[i], tmp[i - 1]);
    cout<<tmp[n]<<endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        for (int i = 0; i < N; i++)
            tmp[i] = 0;
        in();
    }
    return 0;
}