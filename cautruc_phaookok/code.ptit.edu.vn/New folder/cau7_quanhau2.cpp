#include<iostream>
using namespace std;
bool cot[100], dcx[100], dcn[100];
int A[100][100];
int x[100];
int diemlonnhat=0;
void init(){
	diemlonnhat=0;
	for(int i=1;i<=8;i++)
		cot[i]=true;
	for(int i=1;i<16;i++){
		dcx[i]=true;
		dcn[i]=true;
	}
	for(int i=1;i<=8;i++)
		for(int j=1;j<=8;j++)
			cin>>A[i][j];
}
void quanhau2(int i){
	for(int j=1;j<=8;j++){
		if(cot[j] && dcx[i-j+8] && dcn[i+j-1]){
			x[i]=j;
			cot[j]=false;
			dcx[i-j+8]=false;
			dcn[i+j-1]=false;
			if(i==8){
				int tong=0;
				for(int k=1;k<=8;k++)
					tong=tong+A[k][x[k]];
				if(tong>diemlonnhat)
					diemlonnhat=tong;
			}
			else 
				quanhau2(i+1);
			cot[j]=true;
			dcx[i-j+8]=true;
			dcn[i+j-1]=true;
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		
		init();
		quanhau2(1);
		cout<<diemlonnhat<<endl;
	}
}
