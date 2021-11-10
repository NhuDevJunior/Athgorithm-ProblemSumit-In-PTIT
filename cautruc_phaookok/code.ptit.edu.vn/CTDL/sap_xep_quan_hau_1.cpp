#include <bits/stdc++.h>
using namespace std;
const int mx = 11;
int t, n, dem, cot[mx], hang[mx], nguoc[mx*2], xuoi[mx*2];
void check()
{
    for(int i = 0; i <= mx; i++)
        cot[i] = 1;
    for(int i = 0; i <= mx; i++)
        hang[i] = 1;
    for(int i = 0; i <= mx*2; i++)
        nguoc[i] = 1;
    for(int i = 0; i <= mx*2; i++)
        xuoi[i] = 1;
}
void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(cot[j] && hang[j] && nguoc[i+j-1] && xuoi[i-j+n])
        {
            cot[j] = 0, hang[j] = 0, nguoc[i+j-1] = 0, xuoi[i-j+n] = 0;
            if(i == n)
            dem++;
            else 
            Try(i+1);
            cot[j] = 1, hang[j] = 1, nguoc[i+j-1] = 1, xuoi[i-j+n] = 1;
        }
    }
}
int main(){
    cin>>t;
    while (t--)
    {
        cin>>n;
        dem = 0;
        check();
        Try(1);
        if(n == 1)
        cout<<0<<endl;
        else 
        cout<<dem<<endl;
    }
    return 0;
}