#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, arr[10005];

ll cnp(ll a)
{
    vector <ll> b;
    while (a)
    {
        b.push_back(a%2);
        a/=2;
    }
    ll sum = 0;
    for(ll i = b.size()-1; i >= 0; i--)
    {
        sum = sum*10+b[i];
    }
    return sum;
}
void in(){
    arr[0] = 0;
    arr[1] = 1;
    for(ll i = 2; i <= n; i++)
        arr[i] = cnp(i);
    for(ll i = 1; i <= n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        cin>>n;
        in();
    }
    return 0;
}