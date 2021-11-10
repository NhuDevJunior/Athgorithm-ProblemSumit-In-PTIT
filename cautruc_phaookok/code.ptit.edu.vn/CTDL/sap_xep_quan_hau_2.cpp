#include <bits/stdc++.h>
using namespace std;
const int mx = 11;
int t, n, dem, sum, Max, a[mx][mx], arr[mx], cot[mx], hang[mx], nguoc[mx * 2], xuoi[mx * 2];

void nhap(){
    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= 8; j++)
            cin>>a[i][j];
    }
}
void check()
{
    for (int i = 0; i <= mx; i++)
        cot[i] = 1;
    for (int i = 0; i <= mx; i++)
        hang[i] = 1;
    for (int i = 0; i <= mx * 2; i++)
        nguoc[i] = 1;
    for (int i = 0; i <= mx * 2; i++)
        xuoi[i] = 1;
}
void Try(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (cot[j] && hang[j] && nguoc[i + j - 1] && xuoi[i - j + 8])
        {
            arr[i] = j;
            cot[j] = 0, hang[j] = 0, nguoc[i + j - 1] = 0, xuoi[i - j + 8] = 0;
            if (i == 8)
            {
                sum = 0;
                for(int l = 1; l <= 8; l++)
                    sum+=a[l][arr[l]];
                Max = max(sum, Max);
            }
            else
                Try(i + 1);
            cot[j] = 1, hang[j] = 1, nguoc[i + j - 1] = 1, xuoi[i - j + 8] = 1;
        }
    }
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        Max = 0;
        check();
        Try(1);
        cout<<Max<<endl;
        
    }
    return 0;
}