#include <bits/stdc++.h>
using namespace std;

int t, flat;
string s;
char n;
stack<char> sta;
int main()
{
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ')')
            {
                flat = 1;
                n = sta.top();
                sta.pop();
                while (n != '(')
                {
                    if (n == '+' || n == '-' || n == '*' || n == '/')
                        flat = 0;
                    n = sta.top();
                    sta.pop();
                }
                if (flat)
                    break;
            }
            else
                sta.push(s[i]);
        }
        if (flat)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
