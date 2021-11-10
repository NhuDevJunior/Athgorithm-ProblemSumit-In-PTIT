#include<iostream>
using namespace std;
int n,k;
int M=1e9+7;
long long luythua(int n, int k){
	if(k==0)
		return 1;
	long long x=luythua(n,k/2);
	if(k%2==0)
		return x*x%M;
	else 
		return (x*x%M)*n%M;
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long a=luythua(n,k);
		cout<<a<<endl;
	}
}
