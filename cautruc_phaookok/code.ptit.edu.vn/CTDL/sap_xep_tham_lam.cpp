#include <bits/stdc++.h>
using namespace std;

int t, n, a[100], b[100], flat;

void nhap(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
}
void in(){
    sort(b, b+n);
    flat = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i] && a[i] != b[n-i-1])
        {
            flat = 1;
            break;
        }
    }
    if(flat)
    cout<<"No"<<endl;
    else 
    cout<<"Yes"<<endl;
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