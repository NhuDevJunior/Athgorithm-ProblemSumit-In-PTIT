#include <bits/stdc++.h>
using namespace std;
int t;
string a;
int main(){
    cin>>t;
    cin.ignore();
    while (t--)
    {
        cin>>a;
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] == 0)
            cout<<a[i];
            if(a[i] == a[i-1])
            cout<<0;
            else
            cout<<1;
        }
        cout<<endl;
    }
    return 0;
}
