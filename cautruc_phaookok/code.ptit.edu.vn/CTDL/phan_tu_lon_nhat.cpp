#include <bits/stdc++.h>
using namespace std;

int t, n, k, a[1000];
void nhap()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void in()
{
    sort(a, a+n);
    for(int i = n-1; i >= n-k; i--)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        in();
    }
    return 0;
}