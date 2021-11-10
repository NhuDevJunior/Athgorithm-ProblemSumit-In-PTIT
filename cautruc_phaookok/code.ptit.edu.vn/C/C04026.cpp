#include <stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	long long a[n];
	for(long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(long long i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
				if (a[i]>a[j]) {
				int x=a[j];
				a[j] = a[i];
				a[i]=x;
			}
		}
		printf("Buoc %d:",i+1);
		for(int k=0;k<n;k++){
			printf(" %lld",a[k]);
		}
		printf("\n");
	}
	return 0;
}
