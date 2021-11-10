//Quay lui - BackTrack liet ke cac to hop chap k phan tu cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, k, X[100],kp[100],dem=0;
int check()
{
  for(int i=1;i<k;i++)
  {
    int c = X[i];
    int d = X[i+1];
    if(kp[c]>kp[d])
    {
	  return 0;
	}
  }
  return 1;
}
void print()
{
if(check()==1)
{
dem++;
}
}
void BackTrack(int i)
{ 
    for (int j = X[i - 1] + 1; j <= n - k + i; j++)
    {
        X[i] = j;   
        if (i == k) 
            print();
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
		   cin>>kp[i];
		}
        BackTrack(1); 
        cout<<dem;
    return 0;
}
