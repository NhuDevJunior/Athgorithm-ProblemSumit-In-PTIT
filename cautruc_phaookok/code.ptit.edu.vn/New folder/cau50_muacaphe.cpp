#include<iostream>
#include<algorithm>
using namespace std;
long long A[100005];
int n,q;
long long k;

int caphe(int l, int r, long long k){
	
	int res=0;
	int mid=(l+r)/2;
	while(l<=r){
		if(k==A[mid])
			res= mid;
		if(k<A[mid]){
			res=mid-1;
			r=mid-1;
		}
		else 
			l=mid+1;
		mid=(l+r)/2;
	}
	if(res==0)
		return r;
	return res;
}
main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>A[i];
	sort(A+1, A+1+n);
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>k;
		int x=caphe(1,n,k);
		cout<<x<<endl;
	}
}
