#include<bits/stdc++.h>
using namespace std;
map<long long,bool> d;
long long res;
vector<int> a;
//void Try(int i,int n)
//{
////	for(int j=0;j<=1;j++)
////	{
////		u[i]=j;
////		if(i==n-1)
////		{
////			long long ans=0;
////			for(int l=0;l<n;l++)
////			{
////				if(u[l]==1)
////				{
////					ans=10*ans+a[l];
////				}
////			}
////			if(d[ans]==true && ans!=0&& res<ans)
////			{
////				res=ans;
////				
////			}
////		}
////		else Try(i+1,n);
////		
////	}
//}
bool cauhinhcuoi = false;
void sinhbit(int u[],int n)
{
  int i = n;
      while (i > 0 && u[i] == 1) {
        u[i] = 0;
        i--;
    }
    if(i == 0) 
    {
	cauhinhcuoi=true;
	}
    else u[i] = 1;
	 
}
int main()
{
//	ios_base::sync_with_stdio(0);cin.tie(0);
	for(long long i=1;i<=1000000;i++)
	{
		d[i*i*i]=true;
	}
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		int u[20];
		int dem=0;
		cin>>n;
		a.clear();
		//tach so n roi dua vao vector a
		while(n)
		{
			a.push_back(n%10);
			n/=10;
			u[++dem]=0;
		}
		reverse(a.begin(),a.end());
		res=-1;
//	    sinhbit(u,dem);
	    while(cauhinhcuoi!=true)
	    {
        	sinhbit(u,dem);
        	long long ans=0;
			for(int l=1;l<=dem;l++)
			{
				if(u[l]==1)
				{
					ans=10*ans+a[l];
				}
			}
//			if(d[ans]==true && ans!=0&& res<ans)
//			{
//				res=ans;
//				
//			}
			cout<<ans<<endl;
		}
//		cout<<res<<endl;
    }
}
