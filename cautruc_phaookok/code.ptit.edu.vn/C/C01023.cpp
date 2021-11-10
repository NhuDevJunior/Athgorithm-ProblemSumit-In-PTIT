#include<stdio.h>
#include<math.h>
int kt(long long n){
	int r;
	while(n>0){
		r=n%10;
		if(r==1||r==2||r==3||r==4||r==5||r==7||r==9) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(kt(n)==1) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
