#include <bits/stdc++.h>
using namespace std;

int t, k, a[100], b[100];
string s;

void nhap(){
    // memset(a, 0, 100);
    for (int i = 0; i < 100; i++)
    {
        a[i] = 0;
    }
    cin>>k;
    cin>>s;
}
void in(){
    int n = s.size(), dem = 0, sum = 0, flat;
    for(int i = 0; i < n; i++)
        a[s[i]]++;
    for(int i = 65; i < 100; i++)
    {
        if(a[i])
        b[dem++] = a[i];
    }
    sort(b, b+dem);
    for(int i = dem-1; i >= 0; i--)
    {
        flat = 0;
        while (b[i] >= b[i-1] && k > 0)
        {
            b[i]--;
            k--;
            flat=1;
        }
        sort(b, b+dem);
        if(flat)
        i++;
    }
    for(int i = 0; i < dem; i++)
        sum += b[i]*b[i];
    cout<<sum<<endl;
}
int main(){
    cin>>t;
    cin.ignore();
    while (t--)
    {
        nhap();
        in();
    }
    return 0;
}