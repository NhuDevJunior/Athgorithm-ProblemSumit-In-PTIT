//Quay lui - BackTrack liet ke cac xau nhi phan
#include <bits/stdc++.h>
using namespace std;
int n, k, dem=0, s[100],a[100],sodaycon=0;
void print()
{
	sodaycon++;
    for(int i = 1; i <= n; i++)
    {
        if(s[i]==1)
        {
        cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}
void BackTrack(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        s[i] = j;
        if (i == n)
        {
            for(int l = 1; l <= n; l++)
            {
                if(s[l]==1)
                {
                dem+=a[l];
                }
            }
            if(dem == k)
            {
               print();
            }
            dem=0;
        }
        else
            BackTrack(i + 1);
    }
    return;
}
int main()
{
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
		   cin>>a[i];
		}
        BackTrack(1);
        cout<<sodaycon;
    return 0;
}
