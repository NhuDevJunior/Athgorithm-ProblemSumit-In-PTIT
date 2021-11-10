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

	for(long long i=0;i<n;i++){
			qsort(a, i+1, sizeof(long long), cmp);
		printf("Buoc %d:",i);
		for(int k=0;k<=i;k++){
			printf(" %lld",a[k]);
		}
		printf("\n");
	}
	return 0;
}
