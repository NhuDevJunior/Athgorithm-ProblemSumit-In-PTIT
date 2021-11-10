#include <stdio.h>
#include <stdlib.h>
int cmp (const void * a, const void * b) {
   return ( *(long long*)a - *(long long*)b );
}
int kt(long long a[], long long b[], long long n){
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]) return 1;
	}
	return 0;
}
int main(){
	long long n;
	scanf("%lld",&n);
	long long a[n],b[n];
	for(long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
		b[i]=a[i];
	}
	qsort(b, n, sizeof(long long), cmp);
	for(long long i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
				if (a[j]<a[j-1]) {
				int x=a[j];
				a[j] = a[j-1];
				a[j-1]=x;
			}
			}
		
		printf("Buoc %d:",i+1);
		for(int k=0;k<n;k++){
			printf(" %lld",a[k]);
		}
		printf("\n");
		if(kt(a,b,n)!=1) break;
	}
	return 0;
}
