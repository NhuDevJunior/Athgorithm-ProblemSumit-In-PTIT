#include<stdio.h>
#include<math.h>
int main(){
	long long n,q;
	scanf("%lld",&n);
	long long a[n];
	for (long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&q);
	long long k=n-q;
	long long h=k%n;
	long long b[n];
	if (k<=n) {
		for(long long i=0;i<n;i++){
		if (i+k<n) b[i]=a[i+k];
		else {
			b[i]=a[i+k-n];
		}
		}		
		for (long long i=0;i<n;i++){
		printf("%lld ",b[i]);
		}
	}
	else {
		for(long long i=0;i<n;i++){
		if (i+h<n) b[i]=a[i+h];
		else {
			b[i]=a[i+h-n];
		}
		}		
		for (long long i=0;i<n;i++){
		printf("%lld ",b[i]);
		}
	}
	
	return 0;
}
