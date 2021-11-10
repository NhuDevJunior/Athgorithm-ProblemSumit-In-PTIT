#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, k, dem=0, s[100000], a[100000],sizeok,x[16];
bool cauhinhcuoi=false;
void sinh()
{
  int i = sizeok;
      while (i > 0 && x[i] == 1) {
        x[i] = 0;
        i--;
    }
    if(i == 0) 
    {
	cauhinhcuoi=true;
	}
    else x[i] = 1;
}
void in()
{
	ll sum =0;
  for(int i=1;i<=sizeok;i++)
  {
  	int c;
    if(x[i]==1)
    {
	c=9;
	}
	else
	{
	c=0;
	}
	sum=sum*10+c;
  }
  a[++dem]=sum;
}
int main()
{
	cin>>t;
	sizeok=15;
	for(int i=1;i<=sizeok;i++)
	{
	  x[i]=0;
	}
	while(cauhinhcuoi!=true)
	{
	 in();
	 sinh();
	}
	while(t>0)
	{
		cin>>n;
		for(int i=1;i<=dem;i++)
		{
			if(a[i]!=0&&a[i]%n==0)
			{
			 cout<<a[i]<<endl;
			 break;
			}
		}
		t--;
	}
}
