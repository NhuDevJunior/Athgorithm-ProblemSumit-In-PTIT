#include <bits/stdc++.h>
using namespace std;

int t, k;
string s;
void in(){
    int n = s.size(), mx, vt;
    for(int i = 0; i < n; i++)
    {
        mx = s[i]-48;
        vt = i;
        if(k)
        {
            for(int j = n-1; j > i; j--)
            {
                int tmp = s[j]-48;
                if(mx < tmp)
                {
                    mx = tmp;
                    vt = j;
                }
            }
            if(mx > s[i]-48)
            {
                swap(s[i], s[vt]);
                k--;
            }   
        }
    }
}
int main(){
    cin>>t;
    while (t--)
    {
        cin>>k;
        cin>>s;
        in();
        cout<<s<<endl;
    }
    
}