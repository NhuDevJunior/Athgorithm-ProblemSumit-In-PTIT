#include <bits/stdc++.h>
using namespace std;

int t, d;
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
    if ((mx-1)* (d-1) > n-mx)
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
        cin >> d >> s;
        in();
    }
    return 0;
}