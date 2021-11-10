#include<iostream>
using namespace std;
long long a[100000];
int n;
long long k;
init(void){
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
}
long long vitri(long l,long r,long long k){
	if(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==k)
			return mid;
		if(k<a[mid])
			return vitri(l,mid-1,k);
		return vitri(mid+1,r,k);
	}
	return 0;
}
main(){
		int t;
		cin>>t;
		while(t--){
			init();
			int x=vitri(1,n,k);
			if(x==0)
				cout<<"NO"<<endl;
			else 
				cout<<x<<endl;
		}
}
