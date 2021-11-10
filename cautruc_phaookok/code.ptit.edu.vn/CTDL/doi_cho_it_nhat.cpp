#include <bits/stdc++.h>
using namespace std;

int t, n;
struct ki
{
    int x, y;
};
ki arr[1005];
int cmp(ki a, ki b)
{
    if(a.x < b.x)
    return 1;
    if(a.x == b.x && a.y < b.y)
    return 1;
    return 0;
}
void nhap(){
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i].x;
        arr[i].y = i;
    }
}
void in(){
    sort(arr, arr+n, cmp);
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        while (arr[i].y != i)
        {
            dem++;
            swap(arr[i], arr[arr[i].y]);
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