#include<stdio.h>
#include<math.h>
int main(){
    long long n,dem=0;
    scanf("%lld",&n);
    while(n>0){
        n/=10;
        dem++;
    }
    printf("%lld",dem);
    return 0;
}
