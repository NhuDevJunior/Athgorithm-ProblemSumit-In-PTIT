#include <bits/stdc++.h>

using namespace std;

int i, j, n, a[100][100], ok[100][100];

vector<string> v;

void Try(int i, int j, string o)
{
    if(i == n && j == n)
    v.push_back(o);
    if(a[i+1][j] == 1 && i!= n && ok[i+1][j] == 0)
    {
        ok[i][j] = 1;
        Try(i+1, j, o+"D");
        ok[i][j] = 0;
    }
    /*if(a[i-1][j] == 1 && i!= 1 && ok[i-1][j] == 0)
    {
        ok[i][j] = 1;
        Try(i-1, j, o+"U");
        ok[i][j] = 0;

    }*/
    if(a[i][j+1] == 1 && j!= n && ok[i][j+1] == 0)
    {
        ok[i][j] = 1;
        Try(i, j+1, o+"R");
        ok[i][j] = 0;

    }
    /*if(a[i][j-1] == 1 && j!= 1 && ok[i][j-1] == 0)
    {
        ok[i][j] = 1;
        Try(i, j-1, o+"L");
        ok[i][j] = 0;
    }*/
}
int main(){
    int x;
    cin>>x;
    while (x--)
    {
        v.clear();
        cin>>n;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
                cin>>a[i][j];
                ok[i][j] = 0;
        }
        if(a[1][1] == 0 || a[n][n] == 0)
            cout<<-1<<endl;
        else 
        {
            Try(1,1,"");
            if(v.size() == 0)
            cout<<-1<<endl;
            else 
            {
                sort(v.begin(), v.end());
                for(int i = 0; i < v.size(); i++)
                cout<<v[i]<<" ";
                cout<<endl;
            }
        }
    }
}