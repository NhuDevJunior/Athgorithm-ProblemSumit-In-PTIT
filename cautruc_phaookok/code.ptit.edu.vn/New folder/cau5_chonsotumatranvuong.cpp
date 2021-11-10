#include<iostream>
using namespace std;
bool cot[101];
int x[101], a[101][101];
int n,k,dem=0;
void init(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cot[i]=true;
	for(int i=1;i<=n;i++)	
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
}
void xuat(){
	for(int l=1;l<=n;l++)
		cout<<x[l]<<" ";
	cout<<endl;
}
void demsolan(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]){
			x[i]=j;
			cot[j]=false;
			if(i==n){
				long long tong=0;
				for(int m=1;m<=n;m++){
					tong=tong+a[m][x[m]];
				}
				if(tong==k)	
					dem++;
			}
			else 
				demsolan(i+1);
			cot[j]=true;
		}
	}
}
void chonso(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]){
			x[i]=j;
			cot[j]=false;
			if(i==n){
				long long tong=0;
				for(int m=1;m<=n;m++){
					tong=tong+a[m][x[m]];
				}
				if(tong==k)	
					xuat();
			}
			else 
				chonso(i+1);
			cot[j]=true;
		}
	}
}
main(){
	init();
	demsolan(1);
	cout<<dem<<endl;
	chonso(1);
}
