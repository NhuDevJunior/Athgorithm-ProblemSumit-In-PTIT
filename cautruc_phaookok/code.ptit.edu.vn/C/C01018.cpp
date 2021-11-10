#include<stdio.h>
#include<math.h>
int so_chinh_phuong(long long x){
	if ((long long) sqrt(x) == sqrt(x) ) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(so_chinh_phuong(n)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
