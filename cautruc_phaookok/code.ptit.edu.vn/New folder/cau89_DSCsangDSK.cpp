#include<iostream>
using namespace std;
int m,n;
int F[55][55]={0};
main(){
	cin>>n>>m;
	int a,b;
	for(int i=1;i<=m;i++){
		cin>>a;
		cin>>b;
		F[a][b]=1;
		F[b][a]=1;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(F[i][j]==1)
				cout<<j<<" ";
		cout<<endl;
	}
}
