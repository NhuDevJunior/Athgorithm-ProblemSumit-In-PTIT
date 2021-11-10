#include<stdio.h>
#include<math.h>
int sum(long long n){
	long long s=0;
	while(n>0){
		s=s+(n%10);
		n/=10;
	} 
	return s;
}
int main(){
	long long t;
	scanf("%lld",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(sum(n)%10==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
