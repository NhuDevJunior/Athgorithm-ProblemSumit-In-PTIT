#include<stdio.h>
#include<math.h>
int kt(long long a){
	long long s=0;
	while(a>0){
		s+=(a%10);
		a/=10;
	}
	if(s%5==0) return 1;
	else return 0;
}
int snt(long long a){
	if(a<2) return 0;
	else{
		for(long long i=2;i<=sqrt(a);i++){
			if(a%i==0) return 0;
		}
	}
	return 1;
}
int main(){
	long long n,dem = 0;
	scanf("%lld",&n);
	for(long long i=5;i<n;i++){
		if(kt(i)==1&&snt(i)==1){
			printf("%lld ",i);
			dem++;
		} 
	}
	printf("\n%lld",dem);
}
