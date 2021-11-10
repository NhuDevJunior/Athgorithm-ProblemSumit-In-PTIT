#include<iostream>
using namespace std;
int n,F[1005],A[1005];
main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>A[i];
	int kq=1;
	
	for(int i=1;i<=n;i++){
		F[i]=1;
		
		for(int j=0;j<i;j++){
			if(A[j]<A[i])
				F[i]=max(F[i],F[j]+1);
		}
			
		kq=max(kq,F[i]);
	}
	cout<<kq;
}
