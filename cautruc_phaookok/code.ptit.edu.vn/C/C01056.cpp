#include <stdio.h>
#include <math.h>
int kt(int a[], int n){
	for(int i=2;i<n;i++){
		if(a[i]>a[i-1]) return 0;
	}
	return 1;
}
int main(){
	long long t;
	scanf("%lld\n",&t);
	while(t--){
		long long n;
		int a[20];
		scanf("%lld",&n);
		int k=1;
		while(n>0){
			a[k]=n%10;
			k++;
			n/=10;
		}
		if(kt(a,k)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
