#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, a, x, y, z, sum;
priority_queue<ll, vector<ll>, greater<ll> > arr;

void nhap(){
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a;
        arr.push(a);
    }
}
void in(){
    sum = 0;
    while (arr.size() > 1)
    {
        x = arr.top();
        arr.pop();
        y = arr.top();
        arr.pop();
        z = x+y;
        arr.push(z);
        sum += z;
    }
    while(arr.size())
    arr.pop();
    cout<<sum<<endl;
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