#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        int a[n+5];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        int *p = find(a, a+n, k);
        if(p != a+n)
            cout<<p-a+1<<endl;
        else 
        cout<<"NO"<<endl;
    }
    
}