#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll t, n, k;

void nhap(){
    cin>>n>>k;
}
void in(){
    if(k > n)
    {
        cout<<0<<endl;
        return;
    }
    ll sum = 1;
    for(ll i = n-k+1; i <= n; i++)
    {
        sum = (sum%mod*i%mod)%mod;
    }
    cout<<sum<<endl;
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
