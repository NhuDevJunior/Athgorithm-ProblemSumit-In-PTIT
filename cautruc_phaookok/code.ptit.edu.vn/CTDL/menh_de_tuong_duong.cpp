#include <bits/stdc++.h>
using namespace std;
int t, n, k;
string s;
stack<int> sta;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                sta.push(i);
            else if (s[i] == ')')
            {
                k = sta.top();
                sta.pop();
                if (k == 0)
                    continue;
                if (s[k - 1] == '-')
                {
                    for (int j = k; j < i; j++)
                    {
                        if (s[j] == '-')
                            s[j] = '+';
                        else if (s[j] == '+')
                            s[j] = '-';
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '(' && s[i] != ')')
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}