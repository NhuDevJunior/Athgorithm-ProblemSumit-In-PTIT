#include<stdio.h>
#include<math.h> 
int main(){
	long long a, b;
	scanf ("%lld%lld", &a, &b);
	long long tong=(a+b)*(abs(a-b)+1)/2;
	printf("%lld",tong);
	return 0; 
} 
