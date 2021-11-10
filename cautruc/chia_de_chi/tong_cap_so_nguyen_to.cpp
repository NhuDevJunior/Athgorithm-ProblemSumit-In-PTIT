#include<bits/stdc++.h>
using namespace std;
vector<bool> ok(1000007,false);
void Sang()
{
	ok[0]=ok[1]=true;
	for(long long i=2;i<=1000000;i++)
	{
		if(!ok[i])
		{
			for(long long j=i*i;j<=1000000;j+=i)
			{
				ok[j]=true;
			}
		}
	}
}
int main()
{
	Sang();
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		bool test = false;
		for(long long i=2;i<=n;i++)
		{
			if(ok[i]==false && ok[n-i]==false)
			{
				cout<<i<<' '<<n-i;
				test=true;
				break;
			}
		}
		if(!test) cout<<-1;
		cout<<endl;
	}
}
