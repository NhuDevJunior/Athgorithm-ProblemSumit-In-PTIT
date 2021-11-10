#include<iostream>
#include<string>
using namespace std;
bool ok=1;
char S[17];
int n,k;
void tieptheo(){
	int i=n;
	while(i>0 && S[i]=='B'){
		S[i]='A';
		i--;
	}
	if(i>0)
		S[i]='B';
	else 
		ok=0;
}
int kiemtra(){
	int dem=0;
	int i=n;
	for(int j=1;j<=i;j++){
		int soA=0;
		if(S[j]=='A'){
			for(int l=j;l<j+k;l++){
				if(S[l]=='A')
					soA++;
			}
			if(soA==k)
			dem++;
		}
		
	}
	if(dem==1)
		return 1;
	return 0;
}
main(){
	cin>>n>>k;
	int dem2=0;
	for(int i=1;i<=n;i++)
			S[i]='A';
	while(ok){
		
		if(kiemtra()){
			dem2++;
		}
		tieptheo();
	}
	cout<<dem2<<endl;
	ok=1;
	while(ok){
		
		if(kiemtra()){
			for(int i=1;i<=n;i++)
				cout<<S[i];
			cout<<endl;
		}
		tieptheo();
	}
}

