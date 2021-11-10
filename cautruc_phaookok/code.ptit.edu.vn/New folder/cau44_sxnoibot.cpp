#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int A[105];
	for(int i=1;i<=n;i++)
		cin>>A[i];
	int dem=1;
	for(int i=1;i<=n-1;i++){
		bool swapped=false;
		for(int j=1;j<=n-1;j++){
			if(A[j]>A[j+1]){
				swap(A[j],A[j+1]);
				swapped=true;
			}
		}
		if(!swapped)
			break;
		
		cout<<"Buoc "<<dem<<": ";
		for(int k=1;k<=n;k++)
			cout<<A[k]<<" ";
		cout<<endl;
		dem++;
		
	}
}
