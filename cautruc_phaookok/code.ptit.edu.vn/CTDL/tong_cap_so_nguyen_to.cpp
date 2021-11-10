#include <bits/stdc++.h>
using namespace std;

int t, n;

int nt(int n){
    if(n < 2)
    return 0;
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}
void in(){
    int flat = 1;
    for(int i = 2; i <= sqrt(n); i++)
    {
        flat = 1;
        if(nt(i) && nt(n-i))
        {
            flat = 0;
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
    if(flat)
    cout<<-1<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        cin>>n;
        in();
    }
    return 0;
    
}