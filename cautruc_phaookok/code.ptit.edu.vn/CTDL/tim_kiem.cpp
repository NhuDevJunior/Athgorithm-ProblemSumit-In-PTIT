#include <bits/stdc++.h>
using namespace std;

int t, n, x, a[1000005];

void nhap(){
    cin>>n>>x;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    int *k = find(a, a+n, x);
    if(k == a+n)
    cout<<-1<<endl;
    else 
    cout<<1<<endl;
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