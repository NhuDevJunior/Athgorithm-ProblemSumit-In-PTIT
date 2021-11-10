#include<stdio.h>
#include<math.h>
int main(){
    long long n,dem,t=0;
    scanf("%lld",&n);
    while(n>0){
    	dem=n%10;
    	t+=dem;
        n/=10;
        
    }
    printf("%lld",t);
    return 0;
}
