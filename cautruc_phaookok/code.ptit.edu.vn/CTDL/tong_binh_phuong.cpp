#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, a[10005];

int main(){
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i = 0; i <= n; i++)
            a[i] = i;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= sqrt(i); j++)
            {
                a[i] = min(a[i], a[i-j*j]+1);
            }
        }
        cout<<a[n]<<endl;
    }
    return 0;
}