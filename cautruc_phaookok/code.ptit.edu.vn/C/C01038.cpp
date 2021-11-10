#include<stdio.h>
#include<math.h>
int main(){
    long long n,dem,t=0;
    scanf("%lld",&n);
    long long r=n%10;
    long long m=n;
    while(m>0){
    	dem=m%10;
        m/=10;
        t++;
    }
    n=n-dem*pow(10, (t-1))+r*pow(10, t-1)+dem-r;
    printf("%lld",n);
    return 0;
}
