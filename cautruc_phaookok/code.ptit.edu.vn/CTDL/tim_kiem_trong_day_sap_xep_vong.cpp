#include <bits/stdc++.h>
using namespace std;

int t, n, x, a[1000005];

void nhap(){
    cin>>n>>x;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
int bSearch(int a[], int l, 
                 int r, int x) 
{ 
    if (r < l) 
        return -1; 
  
    int mid = (l + r) / 2;
    if (x == a[mid]) 
        return mid; 
  
    if (x > a[mid]) 
        return bSearch(a, (mid + 1), r, x); 
    if(x < a[mid])
    return bSearch(a, l, (mid - 1), x); 
    return -2;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        cout<<bSearch(a, 0, n-1, x)+1<<endl;
    }
    
}