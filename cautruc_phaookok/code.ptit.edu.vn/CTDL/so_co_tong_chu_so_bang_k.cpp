#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll t, n, k, tmp[105][50005];


void in(){
    for(ll i = 1; i <= n; i++)
    {
        for(ll l = 0; l <= 9; l++)
        {
            for(ll j = l; j <= k; j++)
            {
                tmp[i][j] += (tmp[i-1][j-l]%mod);
                tmp[i][j]%=mod;
            }    
        }
    }
    cout<<tmp[n][k]<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        memset(tmp, 0, sizeof(tmp));
        for(ll i = 1; i <= 9; i++)
            tmp[1][i] = 1;
        in();
    }
    return 0;
}