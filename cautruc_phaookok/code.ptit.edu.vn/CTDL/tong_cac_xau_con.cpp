#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, a[100], b[100], sum, tmp, dem;
void check(ll n){
    while (n)
    {
        a[dem++] = n%10;
        n/=10;
    }
}
void in(){
    sum = 0, tmp = 0, dem = 0;
    check(n);
    for(int i = dem-1; i >= 0; i--)
    {
        tmp = 0;
        for(int j = i; j >= 0; j--)
        {
            tmp = tmp*10+a[j];
            sum+=tmp;
        }
    }
    cout<<sum<<endl;
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