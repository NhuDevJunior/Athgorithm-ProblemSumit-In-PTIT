#include <bits/stdc++.h>
using namespace std;

string a;
int k;
void solve()
{
    getline(cin,a);
    cin>>k;
    set <int> s;
    for(int i=0 ; i<a.length() ; i++)
    {
        if(a[i] != ' ')
        {
            int x = a[i] - 48;
            s.insert(x);
        }
    }
    for(auto i : s)
    {
        if(i != k) cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        solve();
    }
    return 0;
}