#include <bits/stdc++.h>
using namespace std;

int t, d, s, a[1000];
void in()
{
    if (d == 1 && s == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (s == 0 || s > d * 9)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        int sum = s;
        for (int i = 1; i <= d; i++)
            a[i] = 0;
        for (int i = d; i >= 1; i--)
        {
            for (int j = 9; j >= 0; j--)
            {
                if (sum - j > 0)
                {
                    a[i] = j;
                    sum -= j;
                    break;
                }
                if (sum - j >= 0 && i == 1)
                {
                    a[i] = j;
                    sum -= j;
                    break;
                }
            }
        }
        for (int i = 1; i <= d; i++)
            cout << a[i];
        cout << endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin >> s >> d;
        in();
    }
    return 0;
}