#include <bits/stdc++.h>
using namespace std;
int t, n, m, a[505][505], tmp[505][505];
void nhap(){
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            tmp[i][j] = 0;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin>>a[i][j];
            tmp[i][j] = a[i][j];
        }
    }
}
void in(){
    int mx = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(!a[i][j])
            continue;
            if(a[i][j] == a[i-1][j-1] && a[i][j] == a[i][j-1] && a[i][j] == a[i-1][j])
            {
                tmp[i][j] = min(tmp[i-1][j-1], tmp[i-1][j]);
                tmp[i][j] = min(tmp[i][j], tmp[i][j-1])+1;
            }
            mx = max(tmp[i][j], mx);
        }
    }
    cout<<mx<<endl;
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