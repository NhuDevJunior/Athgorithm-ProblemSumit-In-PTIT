#include<stdio.h>
#include<math.h>
int main(){
    long long n;
    scanf("%lld",&n);
    double s=1;
    for(long long i=2;i<=n;i++){
        s=s+(double) 1/i;
    }
    printf("%.4lf",s);
    return 0;
}
