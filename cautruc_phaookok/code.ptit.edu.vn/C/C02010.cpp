#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		printf("%d",i);
		int x=i,y=i-1,z=n-1;
		for(int j=2;j<=n;j++){
			if(j<=n+1-i){
				x++;
				printf("%d",x);
			}
			else{
				if(i>n){
					printf("%d",z);
					z--;
				}
				else{
					printf("%d",y);
					y--;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
