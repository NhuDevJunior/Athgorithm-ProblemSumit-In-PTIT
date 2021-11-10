#include<bits/stdc++.h>
#define ll long long
const long int N=1e3+5;
const long int mod=1e9+7;
using namespace std;

int n,a[N];
void solve()
{
	int dem=0;
	cin>>n;
	for(int i=0 ; i<n ; i++)	cin>>a[i];
	sort(a,a+n);
	if(a[0] == a[n-1])
	{
		cout<<0<<endl;
		return;
	}
	for(int i=0 ; i<n-1 ; i++)
	{
		if(a[i] != a[i+1])
		{
			dem += (a[i+1] - a[i] - 1);
		}
	}
	cout<<dem<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}