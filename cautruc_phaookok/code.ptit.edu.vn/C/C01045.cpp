#include<stdio.h>
#include<math.h>
int main(){
    long long n,dem;
    scanf("%lld",&n);
    long long r=n%10;
    while(n>0){
    	dem=n%10;
        n/=10;
    }
    printf("%lld %lld",dem,r);
    return 0;
}
