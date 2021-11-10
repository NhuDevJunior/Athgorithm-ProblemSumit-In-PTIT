#include <bits/stdc++.h>
using namespace std;

int t;
string s;

void in()
{
    sort(s.begin(), s.end());
    int mx = 1, dem = 1, n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            dem++;
        else
        {
            mx = max(dem, mx);
            dem = 1;
        }
    }
    if (mx * 2 - 1 > n)
        cout << -1 << endl;
    else
        cout << 1 << endl;
}
int main()
{
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> s;
        in();
    }
    return 0;
}