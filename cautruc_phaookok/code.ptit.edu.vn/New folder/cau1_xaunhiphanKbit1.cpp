#include<iostream>
using namespace std;
int a[17];
int n,k;
bool ok=1;
void nhap(){
	cin>>n>>k;
}
void xuat(){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<endl;
}
void tieptheo(){
	int i=n;
	while(i>0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0){
		a[i]=1;
	}
	else ok=0;
}
int kiemtra(){
	int dem=0;
	for(int i=1;i<=n;i++)
		if(a[i]==1)
			dem++;
	if(dem==k)
		return 1;
	return 0;
}
main(){
	int t;
	cin>>t;
	for(int i=1;i<=n;i++)
		a[i]=0;
	while(t--){
		ok=1;
		nhap();
		while(ok){
			if(kiemtra())
				xuat();
			tieptheo();
		}
	}
}
