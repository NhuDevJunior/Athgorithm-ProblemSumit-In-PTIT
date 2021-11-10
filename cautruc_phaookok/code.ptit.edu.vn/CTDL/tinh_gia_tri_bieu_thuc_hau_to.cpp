#include <bits/stdc++.h>
using namespace std;

int t,x, y, z;
string s;
stack<int> sta;

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
                if(s[i] == '+')
                z = y+x;
                else if(s[i] == '-')
                z = y-x;
                else if(s[i] == '*')
                z = y*x;
                else if(s[i] == '/')
                z = y/x;
                sta.push(z);
            }
            else
            sta.push(s[i]-'0');
        }
        cout << sta.top() << endl;
    }
    return 0;
}