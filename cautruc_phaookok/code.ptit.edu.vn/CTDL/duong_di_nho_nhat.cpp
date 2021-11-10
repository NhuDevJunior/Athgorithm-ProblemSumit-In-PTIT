#include <bits/stdc++.h>
using namespace std;

int t, n, m, a[1000][1000], tmp[1000][1000];
void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            tmp[i][j] = 0;
        }
    }
}
void in()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 && j == 1)
                tmp[i][j] = a[i][j];
            else if (j == 1)
                tmp[i][j] = a[i][j] + tmp[i - 1][j];
            else if (i == 1)
                tmp[i][j] = a[i][j] + tmp[i][j - 1];
            else
            {
                tmp[i][j] = min(tmp[i - 1][j - 1], tmp[i - 1][j]);
                tmp[i][j] = min(tmp[i][j], tmp[i][j - 1]) + a[i][j];
            }
        }
    }
    cout<<tmp[n][m]<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        in();
    }
    return 0;
}