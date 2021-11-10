#include <stdio.h>
void doi(long long *a, long long *b){
	int x=*a;
	*a=*b;
	*b=x;
}
int main(){
	long long n;
	scanf("%lld",&n);
	long long a[n];
	for(long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(long long i=0;i<n-1;i++){
		int min=a[i],index;
		for(int j=i;j<n;j++){
			if(min>a[j]){
				min =a [j];
				index=j;
			} 	
		}
		doi(&a[i],&a[index]);
		printf("Buoc %d:",i+1);
		for(int k=0;k<n;k++){
			printf(" %lld",a[k]);
		}
		printf("\n");
	}
	return 0;
}
