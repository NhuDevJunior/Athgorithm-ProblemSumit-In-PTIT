#include<iostream>
using namespace std;
int n, A[105];
main(){
	cin>>n;
	int dem=1;
	for(int i=1;i<=n;i++)
		cin>>A[i];
	for(int i=1;i<n;i++){
	
		for(int j=i+1;j<=n;j++){
			if(A[i]>A[j])
				swap(A[i],A[j]);
		}
		cout<<"Buoc "<<dem<<": ";
		for(int k=1;k<=n;k++)
			cout<<A[k]<<" ";
		cout<<endl;
		dem++;
	}
}
