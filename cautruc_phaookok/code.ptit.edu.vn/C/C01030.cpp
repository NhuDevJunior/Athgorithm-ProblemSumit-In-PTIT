#include <stdio.h>
#include <math.h>
 
int ktsnt (long a) {
    if (a<=1) return 0;
    else {
        for (int i=2; i<=sqrt (a); i++) {
            if (a%i==0) return 0;
        }
    }
    return 1;
}
 
int main () {
    int t;
    scanf("%d",&t);
    while(t--){
    	long long n;
	    scanf ("%lld", &n);
	    for (long long i=2; i<=sqrt (n); i++) {
	        if (n%i==0) {
	            if (ktsnt (i)==1) {
	                long dem=0;
	                while (n%i==0) {
	                    n=n/i;
	                    dem++;
	                }
	                while(dem--){
	                	printf("%lld ",i);
					}
	            }
	        }
	    }
	    if (n!=1 && ktsnt (n)==1) printf ("%lld", n);
	    printf("\n");
	}
   
    return 0;
}
