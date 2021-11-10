#include<iostream>
using namespace std;
int A[100005];
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>A[i];
		for(int i=1;i<=n;i++){
			int ok=0;
			for(int j=i+1;j<=n;j++){
				if(A[i]<A[j]){
					ok=1;
					cout<<A[j]<<" ";
					break;
				}
			}
			if(ok==0)
				cout<<"-1 ";	
		}
		cout<<endl;
	}
}
