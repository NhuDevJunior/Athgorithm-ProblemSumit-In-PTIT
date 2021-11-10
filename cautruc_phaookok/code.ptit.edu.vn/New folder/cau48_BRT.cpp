#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int A[100005];
int n;
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>A[i];
		sort(A+1,A+1+n);
		int khoangcachmin=abs(A[2]-A[1]);
		for(int i=2;i<n;i++){
			int x=abs( A[i+1]-A[i] );
			if(x<khoangcachmin)
				khoangcachmin=x;
		}
		int dem=0;
		for(int i=1;i<n;i++){
			int x2=abs( A[i+1]-A[i] );
			if(x2==khoangcachmin)
				dem++;
		}
		cout<<khoangcachmin<<" "<<dem<<endl;
	}
}
