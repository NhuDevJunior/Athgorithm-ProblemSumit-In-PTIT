#include <bits/stdc++.h>
using namespace std;
int t, n, k;
string a, b;
stack<int> sta;
string td(string s)
{
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
    while (sta.size())
    {
        sta.pop();
    }
    string x = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '(' && s[i] != ')')
            x += s[i];
    }
    return x;
}
int main()
{
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin>>a;
        cin>>b;
        a = td(a);
        b = td(b);
        if(a == b)
        cout<<"YES";
        else 
        cout<<"NO";
        cout<<endl;
    }
    return 0;
}