//Sinh to hop chap k cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, s, a[50], X[50];
bool flat = false;
void sinh(int k)
{
    int i = k;
    while ((i > 0) && (X[i] == n - k + i))
        i--;
    if (i <= 0)
        flat = true;
    else
    {
        X[i] = X[i] + 1;
        for (int j = i + 1; j <= k; j++)
            X[j] = X[j - 1] + i;
    }
}
int in()
{
    for (int i = 1; i <= n; i++)
    {
        flat = 0;
        for (int j = 1; j <= i; j++)
            X[j] = j;
        while (!flat)
        {
            int sum = 0;
            for (int j = 1; j <= i; j++)
                sum += a[X[j]];
            if (sum == s)
            {
                return i;
            }
            sinh(i);
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int j = 1; j <= n; j++)
            cin >> a[j];
        cout<<in()<<endl;
    }
    return 0;
}