#include<stdio.h>
#include<math.h>
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if(b==0) printf("0");
	else {
		printf("%lld %lld %lld %.2lf %.2lf",a+b,a-b,a*b,(double) a/b, a%b);
	}
	return 0;
}
