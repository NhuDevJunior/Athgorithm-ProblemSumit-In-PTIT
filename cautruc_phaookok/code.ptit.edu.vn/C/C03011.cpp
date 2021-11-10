#include<stdio.h>
#include<math.h>
long long gt(long long n){
	if(n==0) return 1;
	int t=1;
	for(long long i=2;i<=n;i++){
    	t=t*i;
	}
	return t;
}
long long kt(long long a){
	long long b=a,dem=0;
    	while(a>0){
    		int r=a%10;
    		dem+=gt(r);
    		a/=10;
		}
	if(b==dem) return 1;
	else return 0;	
}
int main(){
    long long a,b,dem=0;
    scanf("%lld%lld",&a,&b);
    if(a<=b){
    	for(long long i=a;i<=b;i++){
    		if(kt(i)==1) printf("%lld ",i);
		}
	}
	else{
		for(long long i=b;i<=a;i++){
    		if(kt(i)==1) printf("%lld ",i);
		}
	}
    return 0;
}
