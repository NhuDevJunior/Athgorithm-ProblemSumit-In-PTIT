#include<iostream>
using namespace std;
int n,k;
int a[45],b[45];
bool ok;
void nhap(){
	cin>>n>>k;
	ok=true;
	for(int i=1;i<=k;i++){
		cin>>a[i];
		b[i]=a[i];
	}
}
void tohopketiep(){
	int i=k;
	while(i>0 && a[i]==n-k+i){
		i--;
	}
	if(i>0){
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++)
			a[j]=a[i]+j-i;
	}
	else ok=false;
}
int kiemtra(){
	int dem=0;
	for(int i=1;i<=k;i++)
		for(int j=1;j<=k;j++)
			if(a[i]==b[j])
				dem++;
	if(dem==k)
		return k;
	return k-dem;
}
main(){
	int t;
	cin>>t;
	int x;
	while(t--){
		nhap();
		if(ok){
			tohopketiep();
			x=kiemtra();
		}
		cout<<x<<endl;
	}
	
}
