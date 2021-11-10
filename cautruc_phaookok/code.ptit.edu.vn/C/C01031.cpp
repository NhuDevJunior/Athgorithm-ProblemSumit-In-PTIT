#include<stdio.h>
#include<math.h>

int main() {
	int n,i=2;
	scanf("%d", &n);
	if(n==1) printf("1");
	else{
		while(n>1){
			while(n%i==0){
				n/=i;
				if(n==1) printf("%d",i);
				else printf("%dx",i);
			}
			i++;
		}
	}
	return 0;
}
