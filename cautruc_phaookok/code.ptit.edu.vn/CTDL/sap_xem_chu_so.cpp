#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void chia(ll n, ll b[])
{
    ll last;
    while (n)
    {
        last = n%10;
        b[last]++;
        n/=10;
    }
    
}
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n+5], b[11];
        for(ll i = 0; i <= 10; i++)
            b[i] = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            chia(a[i], b);
        }
        for(int i = 0; i <= 10; i++)
        {
            if(b[i] > 0)
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}