#include <bits/stdc++.h>
using namespace std;
int t, n, a[100], b[100];
void nhap(){
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void tinh(int a[], int b[], int n){
    int k = n-1;
    for(int i = 0; i < k; i++)
        b[i] = a[i]+a[i+1];
    for(int i = 0; i < k; i++)
        a[i] = b[i];
}
void in(int a[], int n){
    cout<<"[";
    for(int i = 0; i < n-1; i++)
        cout<<a[i]<<" ";
    cout<<a[n-1]<<"]"<<endl;
}
void check(){
    while (n)
    {
        in(a, n);
        tinh(a, b, n);
        n--;
    }
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        check();
    }
    return 0;
    
}