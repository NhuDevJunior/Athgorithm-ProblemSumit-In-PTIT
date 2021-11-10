#include <bits/stdc++.h>
using namespace std;

int t, k;
string a, b;

void in()
{
    while (a.size() < b.size())
        a = "0" + a;
    while (a.size() > b.size())
        b = "0" + b;
    string res = "";
    int so1, so2, cong, nho = 0, n = a.size();
    for (int i = n - 1; i >= 0; i--)
    {
        so1 = a[i] - '0';
        so2 = b[i] - '0';
        cong = so1 + so2 + nho;
        res = (char)((cong % k) + '0') + res;
        nho = cong / k;
    }
    if (nho)
        res = (char)(nho + '0') + res;
    cout << res << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> k >> a >> b;
        in();
    }
    return 0;
}