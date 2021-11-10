#include<iostream>
using namespace std;
int F[40005];
int A[1000];
int n,s;
main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++)
		cin>>A[i];
		
	F[0]=1;
	for(int i=1;i<=n;i++)
		for(int j=s;j>=A[i];j--)
			if(F[j-A[i]]==1)
				F[j]=1;
	
	if(F[s]==1)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
}
