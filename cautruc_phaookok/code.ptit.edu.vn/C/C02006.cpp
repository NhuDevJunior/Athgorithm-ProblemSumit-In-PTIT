#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m-1+i;j++){
			if(j<i) printf("~");
			else {
				if(i==1||i==n||j==i||j==m-1+i) printf("*");
				else printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
