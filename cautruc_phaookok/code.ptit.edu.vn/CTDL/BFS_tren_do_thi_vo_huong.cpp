#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, v, k, x, y, a[1005][1005], chuaxet[1005];

void nhap(){
    cin>>v>>n>>k;
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
    queue <int> q;
    cout<<u<<" ";
    chuaxet[u] = 0;
    q.push(u);
    while (q.size())
    {
        int s = q.front();
        q.pop();
        for(int i = 1; i <= v; i++)
        {
            if(a[s][i] && chuaxet[i])
            {
                cout<<i<<" ";
                chuaxet[i] = 0;
                q.push(i);
            }
        }
    }
    
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        check();
        DFS(k);
        cout<<endl;
    }
    return 0;
}