#include <bits/stdc++.h>
using namespace std;

int t, n, dem1, dem2;
string s;
stack <char> sta;

int main(){
    cin>>t;
    while (t--)
    {
        cin>>s;
        n = s.size();
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            sta.push(s[i]);
            else if(s[i] == ')')
            {
                if(sta.size() > 0 && sta.top() == '(')
                    sta.pop();
                else 
                    sta.push(s[i]); 
            }
        }
        dem1 = 0, dem2 = 0;
        while(sta.size() > 0)
        {
            if(sta.top() == '(')
                dem1++;
            else 
                dem2++;
            sta.pop();
        }
        cout<<dem1/2+dem2/2+dem1%2+dem2%2<<endl;
    }
    return 0;
}