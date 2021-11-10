#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, arr[1000005];

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
void check()
{
    arr[0] = 0;
    arr[1] = 1;
    for(ll i = 2; i <= 1000000; i++)
        arr[i] = cnp(i);
}
void in(){
    ll dem = 0;
    for(ll i = 1; i <= n; i++)
    {
        if(arr[i] <= n)
        dem++;
        else 
        break;
    }
    cout<<dem<<endl;
}
int main(){
    check();
    cin>>t;
    while (t--)
    {
        cin>>n;
        in();
    }
    return 0;
}