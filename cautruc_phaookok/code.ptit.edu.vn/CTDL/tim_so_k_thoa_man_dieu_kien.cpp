#include <bits/stdc++.h>
using namespace std;

int t, l, r;

int so5(int a){
    int last;
    while (a)
    {
        last = a%10;
        if(a > 5)   return 0;
        a/=10;
    }
    return 1;
}
int kN(int a){
    set <int> s;
    int last, dem = 0;
    while (a)
    {
        last = a%10;
        s.insert(last);
        a/=10;
        dem++;
    }
    if(s.size() != dem) return 0;
    return 1;
}
void in(){
    int dem = 0;
    for(int i = l; i <= r; i++)
    {
        if(so5(i) && kN(i)) dem++;
    }
    cout<<dem<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        cin>>l>>r;
        in();
    }
    return 0;
}