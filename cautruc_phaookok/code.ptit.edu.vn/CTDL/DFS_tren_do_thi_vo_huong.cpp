#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, v, l, r, x, y, a[1005][1005], chuaxet[1005], b[1005], dem;

void nhap(){
    cin>>v>>n>>l>>r;
    dem = 0;
    for(ll i = 1; i <= v; i++)
    {
        for(ll j = 1; j <= v; j++)
            a[i][j] = 0;
    }
    for(ll i = 1; i <= n; i++)
    {
        cin>>x>>y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
}
void check(){
    for(ll i = 1; i <= v; i++)
        chuaxet[i] = 1;
}
void DFS(ll u){
    b[dem++] = u;
    chuaxet[u] = 0;
    for(ll i = 1; i <= v; i++)
    {
        if(a[u][i] && chuaxet[i])
            DFS(i);
    }
}
void in(){
    if(b[dem-1] != r)
    cout<<-1;
    else 
    {
        for(ll i = 0; i < dem; i++)
            cout<<b[i]<<" ";
    }
    cout<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        check();
        DFS(l);
        in();
    }
    return 0;
}