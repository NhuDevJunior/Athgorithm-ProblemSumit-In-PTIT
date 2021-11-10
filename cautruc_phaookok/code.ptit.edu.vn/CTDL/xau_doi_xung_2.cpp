#include <bits/stdc++.h>
using namespace std;
int t, n, a[105][105];
string s;
void in()
{
    n = s.size();
    for (int i = 0; i < n; i++)
        a[i][i] = 1;
    for (int j = 1; j <= n; j++)
    {
        int l = 0, r = j;
        for (int i = 0; i < n; i++)
        {
            if (s[l] == s[r] && j == 1)
                a[l][r] = 2;
            else if (s[l] == s[r])
                a[l][r] = a[l + 1][r - 1] + 2;
            else
                a[l][r] = max(a[l][r - 1], a[l + 1][r]);
            l++, r++;
        }
    }
    cout << n - a[0][n - 1] << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        in();
    }
    return 0;
}
