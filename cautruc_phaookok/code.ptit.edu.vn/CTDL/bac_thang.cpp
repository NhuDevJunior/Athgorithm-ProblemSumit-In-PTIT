#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll t, n, k, a[1000005];

void nhap(){
    cin>>n>>k;
    for(int i = 0; i <= n; i++)
        a[i] = 0;
}
void in(){
    a[0] = 1;
    a[1] = 1;
    for(ll i = 2; i <= n; i++)
    {
        for(ll j = 1; j <= min(i, k); j++)
        {
            a[i] += a[i-j]%mod;
        }
        a[i]%=mod;
    }
    cout<<a[n]<<endl;
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