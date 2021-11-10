#include<stdio.h>
#include<math.h>
int ktsnt (int a) {
    if (a<=1) return 0;
    else {
        for (int i=2; i<=sqrt (a); i++) {
            if (a%i==0) return 0;
        }
    }
    return 1;
}
int main(){
	int n,dem=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(ktsnt(a[i])==1) dem++;
	}
	printf("%d",dem);
	for(int i=0;i<n;i++){
		if(ktsnt(a[i])==1) printf(" %d",a[i]);
	}
	return 0;
}
