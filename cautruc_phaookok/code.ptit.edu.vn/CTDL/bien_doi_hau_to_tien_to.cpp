#include <bits/stdc++.h>
using namespace std;

int t;
string s, x, y, z, k;
stack<string> sta;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                x = sta.top(), sta.pop();
                y = sta.top(), sta.pop();
                z = s[i] + y + x;
                sta.push(z);
            }
            else
            {
                k = s[i];
                sta.push(k);
            }
        }
        cout << sta.top() << endl;
    }
    return 0;
}