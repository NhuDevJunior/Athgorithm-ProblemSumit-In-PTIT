#include<stdio.h>
#include<math.h>
int main(){
	long long t;
	scanf("%lld",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		printf("%.15lf\n", (double) 1/n);
		
	}
	return 0;
}
