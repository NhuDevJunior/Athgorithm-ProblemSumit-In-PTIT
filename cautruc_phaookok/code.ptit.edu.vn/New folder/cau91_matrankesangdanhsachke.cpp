#include<iostream>
using namespace std;
int n;
int A[1005][1005];
main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>A[i][j];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(A[i][j]==1)
				cout<<j<<" ";
		cout<<endl;
	}
}
