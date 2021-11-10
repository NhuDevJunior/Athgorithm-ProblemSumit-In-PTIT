#include <bits/stdc++.h>
using namespace std;

int t, n, a[1000], tmp1[1000], tmp2[1000];

void nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void inxuoi()
{
    tmp1[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        tmp1[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                tmp1[i] = max(tmp1[i], tmp1[j] + a[i]);
        }
    }
}
void innguoc()
{
    tmp2[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        tmp2[i] = a[i];
        for (int j = n-1; j > i; j--)
        {
            if (a[i] > a[j])
                tmp2[i] = max(tmp2[i], tmp2[j] + a[i]);
        }
    }
}
void in(){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum = max(sum, tmp1[i]+tmp2[i]-a[i]);
    cout<<sum<<endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        inxuoi();
        innguoc();
        in();
    }
    return 0;
}