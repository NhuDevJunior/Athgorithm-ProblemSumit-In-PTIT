#include <bits/stdc++.h>
using namespace std;

string s;
int n;
stack<int> sta;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> n;
            sta.push(n);
        }
        else if (s == "POP" && sta.size() > 0)
            sta.pop();
        else if (s == "PRINT")
        {
            if (sta.size() == 0)
                cout << "NONE" << endl;
            else
                cout << sta.top() << endl;
        }
    }
}