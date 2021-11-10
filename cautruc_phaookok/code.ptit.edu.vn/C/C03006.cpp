#include<stdio.h>
#include<math.h>
int kt (long long a) {
    if (a<=1) return 0;
    else {
        for (long long i=2; i<=sqrt (a); i++) {
            if (a%i==0) return 0;
        }
    }
    return 1;
}
int main() {
	int t;
	scanf("%d",&t);
	for(int j=1;j<=t;j++){
		printf("Test %d: ",j);
		int n;
		scanf("%d",&n);
		if(n==1) printf("1(1)");
		else{
			for (long long i=2; i<=sqrt (n); i++) {
        	if (n%i==0) {
                	long long dem=0;
                	while (n%i==0) {
                    	n=n/i;
                    	dem++;
                	}
                	
                		printf("%d(%d) ",i,dem);
					
            	
        	}
    	}
    	if (n!=1 && kt (n)==1) printf ("%d(1)", n);
				
			
		}
		printf("\n");
	}
	return 0;
}
