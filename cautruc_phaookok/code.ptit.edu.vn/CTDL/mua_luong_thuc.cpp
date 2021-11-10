#include <bits/stdc++.h>
using namespace std;

int t, n, s, m;

void nhap()
{
    cin >> n >> s >> m;
}
void in()
{
    int cn = s / 7;
    if ((s * m) > (s - cn) * n)
        cout << -1 << endl;
    else
    {
        for (int i = 1; i <= s - cn; i++)
        {
            if (i * n >= s * m)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        in();
    }
}