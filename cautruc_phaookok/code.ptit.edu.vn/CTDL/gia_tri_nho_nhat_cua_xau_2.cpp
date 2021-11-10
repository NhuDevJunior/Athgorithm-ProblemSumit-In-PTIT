#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, k, n, a[100005], sum, x;
string s;
priority_queue<ll, vector<ll>, less<ll> > arr;

void nhap(){
    cin>>k;
    cin>>s;
}
void check(){
    n = s.size();
    sort(s.begin(), s.end());
    for(int i = 0; i <= 100; i++)
        a[i] = 0;
    for(int i = 0; i < n; i++)
    {
        a[s[i]-'A']++;
    }
    for(int i = 0; i <= 100; i++)
    {
        if(a[i] != 0)
        arr.push(a[i]);
    }
}
void in(){
    sum = 0;
    while (k--)
    {
        x = arr.top();
        x--;
        arr.pop();
        arr.push(x);
    }
    while(arr.size())
    {
        sum += arr.top()*arr.top();
        arr.pop();
    }
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