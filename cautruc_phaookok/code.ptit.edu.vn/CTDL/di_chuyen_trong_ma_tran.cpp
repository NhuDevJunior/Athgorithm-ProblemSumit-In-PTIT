#include <bits/stdc++.h>

using namespace std;

int n, m, a[100][100], b[100][100], dem ;

void nhap()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin>>a[i][j];
            b[i][j] = 1;
        }
    }
}
void Try(int i, int j)
{
    if(i == n && j == m)
    {
        dem++;
        return;
    }
    if(i < n && b[i+1][j])
        Try(i+1, j);
    if(j < m && b[i][j+1])
        Try(i, j+1);
}
int main(){
    int x;
    cin>>x;
    while (x--)
    {
        cin>>n>>m;
        nhap();
        dem = 0;
        Try(1, 1);
        cout<<dem<<endl;
    }
    
}