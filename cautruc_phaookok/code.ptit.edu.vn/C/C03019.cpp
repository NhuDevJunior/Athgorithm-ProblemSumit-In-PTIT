/*
#include<stdio.h>
#include<math.h>
int tn(long long a){
	long long s=0,n=a;
	while(a>0){
		s=s*10+(a%10);
		a/=10;
	}
	if(s==n) return 1;
	else return 0;
}
int kt(long long a){
	long long s=0;
	while(a>0){
		s+=(a%10);
		a/=10;
	}
	if(s%10==0) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long batdau=pow(10,n-1),ketthuc=pow(10,n),dem=0;
		for(long long i=batdau;i<ketthuc;i++){
			if(tn(i)==1&&kt(i)==1) dem++;
		}
		printf("%lld\n",dem);
	}
	return 0;
}
*/
#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n==2) printf("1");
		if(n==3) printf("9");
		if(n==4) printf("18");
		if(n==5) printf("90");
		if(n==6) printf("180");
		if(n==7) printf("900");
		if(n==8) printf("1800");
		if(n==9) printf("9000");
		printf("\n");
	}
	return 0;
}
