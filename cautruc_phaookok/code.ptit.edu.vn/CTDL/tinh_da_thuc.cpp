#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n, m, a[105], b[105], c[105];

void nhap(){
    for(int i = 0; i <= 105; i++)
        c[i] = 0;
    cin>>n>>m;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < m; i++)
        cin>>b[i];
}
void in(){
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            c[i+j] += a[i]*b[j];
        }
    }
    for(int i = 0; i < n+m-1; i++)
        cout<<c[i]<<" ";
    cout<<endl;
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