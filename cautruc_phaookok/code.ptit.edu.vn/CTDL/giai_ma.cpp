#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '0')
            cout << 0 << endl;
        else
        {
            int a[45];
            for (int i = 0; i <= 40; i++)
                a[i] = 0;
            a[0] = 1;
            a[1] = 1;
            for (int i = 2; i <= s.size(); i++)
            {
                if(s[i-1] > '0')
                a[i] = a[i-1];
                if(s[i-2] == '1' || (s[i-2] == '2' && (s[i-1] >= '0' && s[i-1] < '7')))
                a[i] +=a[i-2];
            }
            cout<<a[s.size()]<<endl;
        }
    }
}