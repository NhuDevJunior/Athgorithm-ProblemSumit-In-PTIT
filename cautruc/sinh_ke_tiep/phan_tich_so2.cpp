#include <bits/stdc++.h>
using namespace std;
int x[5000], ok = 1, k, n,dem=0;
void luu(string kq[])
{
    kq[dem]="(";
    for (int i = 1; i <= k; i++)
    {
    	if(i!=k)
    	{
    	ostringstream temp;  // 'temp' as in temporary
        temp << x[i];
        kq[dem]=kq[dem]+temp.str()+" ";
        }
        else
        {
        ostringstream temp;  // 'temp' as in temporary
        temp << x[i];
        kq[dem]=kq[dem]+temp.str()+")";
        }
    }
}
void in(string kq[])
{
  for(int i=1;i<=dem;i++)
  {
     cout<<kq[i]<<" ";
  }
}
void sinh()
{
    int i = k, j, R, S, D;
    while (i > 0 && x[i] == 1)
        i--;
    if (i > 0)
    {
        x[i] -= 1;
        D = k - i + 1;
        R = D / x[i];
        S = D % x[i];
        k = i;
        if (R > 0)
        {
            for (j = i + 1; j <= i + R; j++)
            {
                x[j] = x[i];
            }
            k += R;
        }
        if (S > 0)
        {
            k = k + 1;
            x[k] = S;
        }
    }
    else
        ok = 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        n = 0, ok = 1;
        dem=0;
        k = 1;
        cin >> n;
        x[k] = n;
        string kq[1000];
        while (ok == 1)
        {
        	dem++;
            luu(kq);
            sinh();
        }
        cout<<dem<<endl;
        in(kq);
        cout<<endl;
    }
    
    
    return 0;
}
