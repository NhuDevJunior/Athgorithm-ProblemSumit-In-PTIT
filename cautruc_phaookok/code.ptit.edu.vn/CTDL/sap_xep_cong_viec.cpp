#include <bits/stdc++.h>
using namespace std;

int t, n;
struct cV
{
    int jB, dL, pF;
};

bool cmp(cV a, cV b)
{
    return a.pF > b.pF;
}
int main(){
    cin>>t;
    while (t--)
    {
        cin>>n;
        cV a[n+5];
        for(int i = 1; i <= n; i++)
        {
            cin>>a[i].jB>>a[i].dL>>a[i].pF;
        }
        sort(a+1, a+n+1, cmp);
        int c[1005] = {0};
        int sum = 0, dem = 0;
        for(int i = 1; i <= n; i++)
        {
            while (c[a[i].dL] && a[i].dL )
                a[i].dL--;
            if(!c[a[i].dL] && a[i].dL)
            {
                c[a[i].dL]=1;
                sum +=a[i].pF;
                dem++;
            }
        }
        cout<<dem<<" "<<sum<<endl;
    }
    
}
