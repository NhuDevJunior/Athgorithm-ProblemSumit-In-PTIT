//Quay lui - BackTrack liet ke cac to hop chap k phan tu cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, k, s, sum, dem, X[100];

void BackTrack(int i)
{ 
    for (int j = X[i - 1] + 1; j <= n - k + i; j++)
    {
        X[i] = j;   
        if (i == k) 
        {
           sum = 0;
           for(int l = 1; l <= k; l++)
                sum+=X[l];
            if(sum == s)
            dem++; 
        }
        else
            BackTrack(i + 1);
    }
    return;
}
int main()
{
    n = 1, k = 1, s = 1;
    int test=1;
    while (true)
    {
    	if(test>100) break;
        cin>>n>>k>>s;
        if(n==0&&k==0&&s==0) break;
        dem = 0;
        if(k > n)
        {
            sum = 0;
            for(int i = 1; i <= n; i++)
                sum+=i;
            if(sum == s)
            dem++;
        }
        else
        BackTrack(1);
        cout<<dem<<endl;
        test++;
//    if(test>100) break;
//    if(n==0&&k==0&&s==0) break;
    
    }
    
    return 0;
}
