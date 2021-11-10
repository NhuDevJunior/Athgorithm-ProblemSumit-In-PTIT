#include<iostream>
using namespace std;
int n;
int x[100],dem=0;
bool cot[100], dcx[100], dcn[100];
void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cot[i]=true;
	}
	for(int i=1;i<2*n;i++){
		dcx[i]=true;
		dcn[i]=true;
	}
}
void quanhau1(int i){
	for(int j=1;j<=n;j++){
		if(cot[j] && dcx[i-j+n] && dcn[i+j-1]){
			x[i]=j;
			cot[j]=false;
			dcx[i-j+n]=false;
			dcn[i+j-1]=false;
			if(i==n){
				dem++;
			}
			else 
				quanhau1(i+1);
			cot[j]=true;
			dcx[i-j+n]=true;
			dcn[i+j-1]=true;
		}
	}
}
main(){
	init();
	quanhau1(1);
	cout<<dem<<endl;
}
