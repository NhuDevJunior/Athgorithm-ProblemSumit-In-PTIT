#include <bits/stdc++.h>
using namespace std;

int t;
string s, x, y ,z, k;
stack <string> sta;

int main(){
    cin>>t;
    while (t--)
    {
        cin>>s;
        for(int i = s.size()-1; i >= 0; i--)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                x = sta.top(), sta.pop();
                y = sta.top(), sta.pop();
                z = "(" + x + s[i] + y + ")";
                sta.push(z);
            }
            else 
            {
                k = s[i];
                sta.push(k);
            }
        }
        cout<<sta.top()<<endl;
    }
    return 0;
}