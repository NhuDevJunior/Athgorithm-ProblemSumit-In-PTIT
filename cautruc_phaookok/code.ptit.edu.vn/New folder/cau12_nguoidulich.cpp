#include<iostream>
using namespace std;
int A[20][20];
bool cot[20];
int n;
int max=0;
int nhonhat=0;
int x[20];
void init(){
	int tong=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cot[i]=true;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>A[i][j];
			
}
void nguoidulich(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]){
			x[i]=j;
			cot[j]=false;
			if(i==n){
				int tong=0;
				for(int k=1;k<=n;k++) 
					tong=tong+A[k][x[k]];
				if(tong<nhonhat)
					nhonhat=tong;
			}
			else 
				nguoidulich(i+1);
			cot[j]=true;
		}
	}
}
main(){
	init();
	nguoidulich(1);
	cout<<nhonhat<<endl;
}
