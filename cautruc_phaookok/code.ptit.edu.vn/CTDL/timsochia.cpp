#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,b;
  cout<<"nhap so n= ";
  cin>>n;
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
	cout<<i<<" ";
	}
  }
}
