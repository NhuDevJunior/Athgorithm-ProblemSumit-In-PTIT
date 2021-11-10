#include <bits/stdc++.h>
using namespace std;

int t, n;
string s, x;
stack<char> sta;
int pri(char a)
{
    if (a == '^')
        return 4;
    else if (a == '*' || a == '/'|| a== '%')
        return 3;
    else if (a == '+' || a == '-')
        return 2;
    return 1;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        x = "";
        n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                x += s[i];
            else if ((s[i] >= 'a' && s[i] <= 'z'))
                x += s[i];
            else if (s[i] == '(')
                sta.push(s[i]);
            else if (s[i] == ')')
            {
                while (sta.size() > 0 && sta.top() != '(')
                {
                    x += sta.top();
                    sta.pop();
                }
                sta.pop();
            }
            else if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
            {
                while (sta.size() > 0 && pri(sta.top()) >= pri(s[i]))
                {
                    x += sta.top();
                    sta.pop();
                }
                sta.push(s[i]);
            }
        }
        while (sta.size() > 0)
        {
            if (sta.top() != '(')
                x += sta.top();
            sta.pop();
        }
        cout << x << endl;
    }
    return 0;
}
