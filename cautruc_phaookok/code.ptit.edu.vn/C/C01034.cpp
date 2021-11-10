#include<stdio.h>
#include<math.h>
int main(){
	long long m,n;
	scanf("%lld%lld",&m,&n);
	long long a,b;
	a =(long long ) ceil(sqrt(m));
	b =(long long) floor(sqrt(n));
	printf("%lld\n",b-a+1);
	for(long long i=a;i<=b;i++){
		printf("%lld\n",i*i);
	}
	return 0;
}
