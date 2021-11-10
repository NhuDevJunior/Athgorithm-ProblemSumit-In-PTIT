#include<iostream>
#include<string>
using namespace std;
int F[1005][1005];
string a,b;
main(){
	cin>>a>>b;
	int m=a.length();
	int n=b.length();
	for(int i=0;i<=m;i++){
		F[i][0]=0;
	}
	for(int i=0;i<=n;i++)
		F[0][i]=0;
	for(int i=0;i<=m;i++)
		for(int j=0;j<=n;j++){
			if(a[i]==b[j])
				F[i+1][j+1]=F[i][j]+1;
			else 
				F[i+1][j+1]=max(F[i+1][j],F[i][j+1]);
		}
	cout<<F[m][n];
}
