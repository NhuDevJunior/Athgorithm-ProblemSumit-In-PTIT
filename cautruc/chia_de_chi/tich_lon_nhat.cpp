#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	int kp[4];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
//	for(int j=1;j<=n;j++)
//	{
//		cout<<a[j]<<" ";
//	}
	kp[1]=a[1]*a[2];
	kp[2]=a[n]*a[n-1];
	kp[3]=a[n]*a[n-1]*a[n-2];
	kp[4]=a[n]*a[1]*a[2];
	sort(kp+1,kp+5);
//	for(int j=1;j<=4;j++)
//	{
//		cout<<kp[j]<<" ";
//	}
    cout<<kp[4];
	
}
