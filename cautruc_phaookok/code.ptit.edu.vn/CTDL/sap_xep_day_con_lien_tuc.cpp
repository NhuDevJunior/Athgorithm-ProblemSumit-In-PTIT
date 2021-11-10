#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        int x = 1, y = n;
        int flat;
        for(int i = 0; i < n-1; i++)
        {   
            flat = 0;
            for(int j = i+1; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    flat = 1;
                    x = i+1;
                    break;
                }
            }
            if(flat)
            break;
        }
        for(int i = n-1; i > 0; i--)
        {   
            flat = 0;
            for(int j = i-1; j >= 0; j--)
            {
                if(a[i] < a[j])
                {
                    flat = 1;
                    y = i+1;
                    break;
                }
            }
            if(flat)
            break;
        }
        cout<<x<<" "<<y<<endl;
    }
    
}