#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		long long n;
		scanf("%lld",&n);
		long long a[n],b[n];
		for(long long i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		for(long long i=0;i<n;i++){
			scanf("%lld",&b[i]);
		}
		for(long long i=0;i<n-1;i++){
			for(int j=1;j<n;j++){
					if (a[j]<a[j-1]) {
						int x=a[j];
						a[j] = a[j-1];
						a[j-1]=x;
					}
					if (b[j]>b[j-1]) {
						int y=b[j];
						b[j] = b[j-1];
						b[j-1]=y;
					}
				}	
		}
		int k=0,h=0;
		printf("Test %d:\n",q);
		for(int i=0;i<2*n;i++){
			if(i%2==0) printf("%lld ",a[k++]);
			else printf("%lld ",b[h++]);
		}
		printf("\n");
	}
	return 0;
}
