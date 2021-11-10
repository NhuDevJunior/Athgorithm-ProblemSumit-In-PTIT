#include <bits/stdc++.h>
using namespace std;
int t;
string s;

void in()
{
    int l = 0, r = 0, mx = 0, n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            l++;
        else
            r++;
        if (l == r)
            mx = max(mx, 2 * r);
        else if (r > l)
        {
            l = 0;
            r = 0;
        }
    }
    l = 0;
    r = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '(')
            l++;
        else
            r++;
        if (l == r)
            mx = max(mx, 2 * l);
        else if (l > r)
        {
            l = 0;
            r = 0;
        }
    }
    cout << mx << endl;
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