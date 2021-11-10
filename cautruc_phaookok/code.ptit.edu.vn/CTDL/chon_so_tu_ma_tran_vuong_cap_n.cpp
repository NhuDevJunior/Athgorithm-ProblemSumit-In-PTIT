//Quay lui - BackTrack liet ke cac hoan vi cua 1..n
#include <bits/stdc++.h>
using namespace std;
int t, n, k, dem, sum, a[100][100], X[100], b[100], c[10000];
void BackTrack(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (b[j])
        {
            X[i] = j;
            b[j] = 0;
            if (i == n)
            {
                sum = 0;
                for (int l = 1; l <= n; l++)
                    sum += a[l][X[l]];
                if (sum == k)
                {
                    for (int l = 1; l <= n; l++)
                        c[dem++] = X[l];
                }
            }
            else
                BackTrack(i + 1);
            b[j] = 1;
        }
    }
    return;
}
int main()
{
    cin >> n >> k;
    dem = 0;
    for (int j = 1; j <= n; j++)
        b[j] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    BackTrack(1);
    cout << dem / n;
    for (int i = 0; i < dem; i++)
    {
        if (i % n == 0)
            cout << endl;
        cout << c[i] << " ";
    }
    return 0;
}