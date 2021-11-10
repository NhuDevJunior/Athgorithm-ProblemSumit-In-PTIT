#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll tu, mau;
        cin>>tu>>mau;
        while (1)
        {
            if(mau%tu==0)
            {
                cout<<1<<"/"<<mau/tu<<endl;
                break;
            }
            else 
            {
                ll tmp = mau/tu+1;
                cout<<1<<"/"<<tmp<<" + ";
                tu = tu*tmp - mau;
                mau *=tmp;
            }
        }
    }
    return 0;
}