#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n, m, x, y;
        cin>>n>>m;
        vector<int> a[n+5];
        for(int i = 0; i < m; i++)
        {
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)
        {
            cout<<i<<": ";
            for(int j = 0; j < a[i].size(); j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
}