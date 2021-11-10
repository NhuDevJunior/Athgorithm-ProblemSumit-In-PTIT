//xau nhi phan ke tiep
#include<bits/stdc++.h>
using namespace std;
bool cauhinhcuoi = false;
map<long long,bool> d;
long long res;
vector<int> a;
void sinhbit(int x[],int n)
{
  int i = n;
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

int main ()
{
  int t;
  	for(long long i=1;i<=100000;i++)
	{
		d[i*i*i]=true;
	}
  long long n;
  cin>>t;
  while(t>0)
  {
  cauhinhcuoi = false;
  int dem=0;
  int x[20];
  long long res=-1;
  long long ans=0;
  cin>>n;
   a.clear();
	//tach so n roi dua vao vector a
	while(n>0)
	{
		a.push_back(n%10);
		n/=10;
		x[++dem]=0;
	}
	reverse(a.begin(),a.end());	
  for(int i=1;i<=dem;i++)
    { 
       x[i]=0;
    }
//  for(int i=0;i<dem;i++)
//  {
//  	cout<<a[i]<<" ";
//  }
  	    while(cauhinhcuoi!=true)
	    {
        	sinhbit(x,dem);
        	long long ans=0;
			for(int l=1;l<=dem;l++)
			{
				if(x[l]==1)
				{
					ans=10*ans+a[l-1];
				}
			}
			if(d[ans]==true && ans!=0&& res<ans)
			{
				res=ans;
				
			}
//         cout<<res<<endl;
		}
		cout<<res<<endl;
  t--;
  }
}
