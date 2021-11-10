#include <bits/stdc++.h>
using namespace std;
int t, n, k, a[205], tmp[40005];
int main(){
    cin>>t;
    while (t--)
    {
        for(int i = 0; i < 40005; i++)
            tmp[i] = 0;
        cin>>n>>k;
        for(int i = 0; i < n; i++)
            cin>>a[i];
        tmp[0] = 1;
        for(int i = 0; i < n; i++)
        {
            int x = a[i];
            tmp[x] = 1;
            for(int j = k; j >= x; j--)
            {
                if(tmp[j-x] && (j-x) != x)
                tmp[j] = 1;
            }
        }
        if(tmp[k])
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}