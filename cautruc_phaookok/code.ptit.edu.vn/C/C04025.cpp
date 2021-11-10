#include <stdio.h>
#include <stdlib.h>
int cmp (const void * a, const void * b) {
   return ( *(long long*)a - *(long long*)b );
}
int main(){
	long long n;
	scanf("%lld",&n);
	long long a[n];
	for(long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	qsort(a, n, sizeof(long long), cmp);
	for(long long i=0;i<n;i++){
		if(a[i]%2==0) printf("%lld ",a[i]);
	}
	for(long long i=0;i<n;i++){
		if(a[i]%2!=0) printf("%lld ",a[i]);
	}
}
