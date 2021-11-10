#include<stdio.h>
#include<math.h>
int tang(long long a){
	long long x;
	long long y=a%10;
	a/=10;
	while(a>0){
		x=a%10;
		if(x>=y) return 0;
		y=x;
		a/=10;
	}
	return 1;
}
int giam(long long a){
	long long x;
	long long y=a%10;
	a/=10;
	while(a>0){
		x=a%10;
		if(x<=y) return 0;
		y=x;
		a/=10;
	}
	return 1;
}
int nt(long long n){
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0) return 0;
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,dem=0;
	scanf("%lld",&n);
	long long batdau=pow(10, n-1), ketthuc=pow(10,n);
	for(long long i=batdau;i<ketthuc;i++){
		if((tang(i)==1||giam(i)==1)&&nt(i)==1) dem++;
	}
	
	printf("%lld\n",dem);
	}
	return 0;
}
