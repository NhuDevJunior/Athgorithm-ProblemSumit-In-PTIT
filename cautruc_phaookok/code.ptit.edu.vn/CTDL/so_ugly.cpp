#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, a[10005];

int main(){
    a[1] = 1;
    ll i2 = 1, i3 = 1, i5 = 1;
    for(ll i = 2; i <= 10005; i++)
    {
        a[i] = min(a[i2]*2, a[i3]*3);
        a[i] = min(a[i], a[i5]*5);
        if(a[i] == a[i2]*2)
            i2++;
        if(a[i] == a[i3]*3)
            i3++;
        if(a[i] == a[i5]*5)
            i5++;
    }
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
    
}