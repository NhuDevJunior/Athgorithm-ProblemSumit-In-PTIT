#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
	long long x=0, y=0;
	scanf("%lld",&n);
	long long a[n];
	for (long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
		x += a[i];
		if(x<=0) x=0;
		else {
			if(y<x) y = x;
		}
	}
	printf("%lld\n",y);
		
	}
	return 0;
}
