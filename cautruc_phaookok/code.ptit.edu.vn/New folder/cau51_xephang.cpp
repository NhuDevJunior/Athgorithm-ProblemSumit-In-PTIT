#include<iostream>
using namespace std;
main(){
	int A[105],B[105];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>A[i];
		cin>>B[i];
	}
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
			if(A[i]>A[j]){
				swap(A[i],A[j]);
				swap(B[i],B[j]);
			}
	long long S=A[1]+B[1];
	for(int i=2;i<=n;i++){
		if(S<=A[i])
			S=A[i]+B[i];
		else 
			S=S+B[i];
	}
	cout<<S<<endl;
}
