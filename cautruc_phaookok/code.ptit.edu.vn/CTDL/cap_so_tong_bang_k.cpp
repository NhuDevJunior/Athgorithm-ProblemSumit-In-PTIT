#include <bits/stdc++.h>
using namespace std;

int t, n, k, a[100];
void nhap(){
    cin>>n>>k;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i]+a[j] == k)
                dem++;
        }
    }
    cout<<dem<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        in();
    }
    return 0;
}