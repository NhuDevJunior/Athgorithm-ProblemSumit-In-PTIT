#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+5], b[2];
        for(int i = 0; i < 2; i++)
            b[i] = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        cout<<b[0]<<endl;
    }
    
}