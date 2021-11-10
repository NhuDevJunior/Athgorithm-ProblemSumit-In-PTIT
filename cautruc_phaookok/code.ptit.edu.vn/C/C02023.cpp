#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
		if(m==n){
			for(int i=m;i>=1;i--){
				for(int j=n;j>0;j--){
					if(j<i) printf("%c",i+96);
					else printf("%c",j+96);
				}
			printf("\n");
			}	
		}
		else if(m<n) {
			for(int i=n;i>=(n-m+1);i--){
				for(int j=n;j>0;j--){
					if(j<i) printf("%c",i+96);
					else printf("%c",j+96);
				}
			printf("\n");
			}
		}
		else if(m>n) {
			for(int i=m;i>=1;i--){
				for(int j=m;j>=(m-n+1);j--){
					if(j<i) printf("%c",i+96);
					else printf("%c",j+96);
				}
			printf("\n");
			}
		}
	return 0;
}
