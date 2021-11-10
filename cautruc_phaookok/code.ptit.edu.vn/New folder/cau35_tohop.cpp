#include<iostream>
using namespace std;
int n,k;
long long F[1005][1005];
int M=1e9+7;
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<=n;i++)
			for(int j=0;j<=i;j++){
				if(j==0||i==j)
					F[i][j]=1;
				else 
					F[i][j]=(F[i-1][j]+F[i-1][j-1])%M;
			}
		cout<<F[n][k]<<endl;
	}
}
