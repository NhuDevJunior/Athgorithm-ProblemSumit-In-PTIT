#include<iostream>
using namespace std;
int A[105], n;
main(){
	cin>>n;
	int dem=1;
	for(int i=1;i<=n;i++)
		cin>>A[i];
		
	for(int i=1;i<n;i++){
		int min=A[i];
		int x;
		for(int j=i+1;j<=n;j++){
			if(A[j]<min){
				x=j;
				min=A[x];
			}
			
		}
		if(x!=i)
			swap(A[i],A[x]);
		cout<<"Buoc "<<dem<<": ";
		for(int k=1;k<=n;k++)
			cout<<A[k]<<" ";
		cout<<endl;
		dem++;
	}
}
