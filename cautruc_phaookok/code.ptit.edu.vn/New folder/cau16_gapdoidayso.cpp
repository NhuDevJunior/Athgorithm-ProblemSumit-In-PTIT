#include<iostream>
#include<math.h>
using namespace std;
int n;
long long k;
init(void){
	cin>>n>>k;
}
timso(int n,long long k){
	long long x=pow(2,n-1);
	if(k==x)
		return n;
	if(k<x)
		return timso(n-1,k);
	return timso(n-1,k-x);
}
main(){
	int t;
	cin>>t;
	while(t--){
		init();
		long long a=timso(n,k);
		cout<<a<<endl;
	}
}
