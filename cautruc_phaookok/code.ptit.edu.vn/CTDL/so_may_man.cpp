#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a = 0, b = 0, dem4 = 1000000, dem7 = 1000000;
        for(int i = 0; i <= n; i++)
        {
            if(n >= 7*i && (n-7*i)%4==0)
            {
                a = (n-7*i)/4;
                b = i;
                if(dem4+dem7 > a+b)
                {
                    dem4 = a;
                    dem7 = b;
                }
            }
        }
        if(4*dem4+7*dem7==n)
        {
            for(int i = 1; i <= dem4; i++)
                cout<<4;
            for(int i = 1; i <= dem7; i++)
                cout<<7;
        }
        else 
        cout<<-1;
        cout<<endl;
    }
    
}