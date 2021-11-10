#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll t, n, k, a[1005], tmp[1005];
void nhap(){
    cin>>n>>k;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
}
void in(){
    for(int i = 1; i <= k; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i >= a[j])
            tmp[i] = (tmp[i]+tmp[i-a[j]])%mod;
        }
    }
    cout<<tmp[k]<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        for(int i = 0; i <= 1000; i++)
            tmp[i] = 0;
        tmp[0] = 1;
        in();
    }
    return 0;
}
