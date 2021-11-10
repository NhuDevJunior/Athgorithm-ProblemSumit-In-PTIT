#include <bits/stdc++.h>
using namespace std;

int n, a[20][20], check[20], X[20], cmin, s, MIN;

void nhap(){
    cin>>n;
    memset(check, 0, sizeof(check));
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin>>a[i][j];
            if(!a[i][j])
                cmin = min(cmin, a[i][j]);
        }
            
    }
}
void Try(int i)
{
    if(s + cmin*(n-i+1) >= MIN)
    return;
    for(int j = 2; j <= n; j++)
    {
        if(!check[j])
        {
            check[j] = 1;
            X[i] = j;
            s+=a[X[i-1]][j];
            if(i == n)
                MIN = min(MIN, s+a[X[n]][X[1]]);
            else 
            Try(i+1);
            check[j] = 0;
            s-=a[X[i-1]][j];
        }
    }
}
int main(){
    s = 0;
    MIN = 1e7;
    check[1] = 1;
    X[1] = 1;
    nhap();
    Try(2);
    cout<<MIN<<endl;
    return 0;
}