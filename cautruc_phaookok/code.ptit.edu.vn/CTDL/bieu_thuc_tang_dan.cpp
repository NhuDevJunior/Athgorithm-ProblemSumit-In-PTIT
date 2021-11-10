#include <bits/stdc++.h>
using namespace std;

int t, n;
string s, x;
stack <char> sta;

int main(){
    cin>>t;
    while (t--)
    {
        cin>>s;
        x = "";
        n = s.size();
        for(int i = 0; i <= n; i++)
        {
            sta.push(i+1+'0');
            if(i == n || s[i] == 'I')
            {
                while (sta.size())
                {
                    x+=sta.top();
                    sta.pop();
                }
            }
        }
        cout<<x<<endl;
    }
    
}