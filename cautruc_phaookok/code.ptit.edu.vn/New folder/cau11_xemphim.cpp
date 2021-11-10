#include<iostream>
using namespace std;
int khoiluong[105];
int F[105][25005];
int n;
int c;
main(){
	cin>>c>>n;
	for(int i=1;i<=n;i++)
		cin>>khoiluong[i];
	for(int i=1;i<=n;i++)
		for(int j=0;j<=c;j++){
			F[i][j]=F[i-1][j];
			if(khoiluong[i]<=j){
				F[i][j]=max(F[i][j],F[i-1][j-khoiluong[i]]+khoiluong[i]);
			}
		}
	cout<<F[n][c];		
			
}
