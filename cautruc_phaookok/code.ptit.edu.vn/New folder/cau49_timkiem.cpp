#include<iostream>
using namespace std;
long long A[1000005];
int n;
long long k;
long long binary(long long l, long long r, long long k){
	if(l<=r){
		int mid=(l+r)/2;
		if(A[mid]==k)
			return mid;
		if(k<A[mid])
			return binary(l, mid-1, k);
		return binary(mid+1, r, k);
	}
	return 0;
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++)
			cin>>A[i];
		long long x=binary(1, n, k);
		if(x==0)
			cout<<"NO"<<endl;
		else 
			cout<<x<<endl;
	}
}
