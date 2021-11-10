#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll t, n, a, x, y, z, sum;
priority_queue<ll, vector<ll>, greater<ll> > arr;

void nhap(){
    cin>>n;
    for(ll i = 0; i < n; i++)
    {
        cin>>a;
        arr.push(a);
    }
}
void in(){
    sum = 0;
    while (arr.size() > 1)
    {
        x = arr.top();
        arr.pop();
        y = arr.top();
        arr.pop();
        z = (x+y)%mod;
        arr.push(z);
        sum += z;
        sum%=mod;
    }
    while(arr.size())
    arr.pop();
    sum%=mod;
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