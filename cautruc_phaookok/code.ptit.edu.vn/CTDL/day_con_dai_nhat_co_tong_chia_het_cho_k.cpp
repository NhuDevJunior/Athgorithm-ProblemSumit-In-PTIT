#include <bits/stdc++.h>
using namespace std;

int t, n, k, a[1005], tmp[1005][55];

void nhap()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 0; i < k; i++)
        tmp[0][i] = -1005;
    tmp[0][0] = 0;
}
void in()
{
    for(int i = 1; i <= n; i++)
    {
        a[i]%=k;
        for(int j = 0; j < k; j++)
        {
            int x = tmp[i-1][j];
            int y = tmp[i-1][(j+k-a[i])%k]+1;
            tmp[i][j] = max(x, y);
        }
    }
    cout<<tmp[n][0]<<endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        in();
    }
    return 0;
}