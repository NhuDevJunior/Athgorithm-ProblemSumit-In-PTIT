#include <bits/stdc++.h>
using namespace std;
int t, n, m, a[100005], b[100005], c[100005];
void nhap()
{
    for (int i = 0; i <= 100005; i++)
        c[i] = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        c[b[i]]++;
    }
}
void in()
{
    for(int i = 0; i <= 100005; i++)
    {
        if(c[i] > 0)
            cout<<i<<" ";
    }
    cout<<endl;
    for(int i = 0; i <= 100005; i++)
    {
        if(c[i] > 1)
            cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        in();

    }
    
}