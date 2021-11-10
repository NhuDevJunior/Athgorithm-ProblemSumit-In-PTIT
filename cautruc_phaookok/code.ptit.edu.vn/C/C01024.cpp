#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    	long long n,dem;
    scanf("%lld",&n);
    long long r=n%10;
    while(n>0){
    	dem=n%10;
        n/=10;
    }
    if(dem==r) printf("YES\n");
    else printf("NO\n");
	}
    return 0;
}
