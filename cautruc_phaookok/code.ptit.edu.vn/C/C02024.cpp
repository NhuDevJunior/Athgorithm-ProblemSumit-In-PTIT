#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		if(i>n) printf("%c",n+64);
		else printf("%c",i+64);
		int x=i,y=i-1,z=n-1;
		for(int j=2;j<=n;j++){
			if(j<=n+1-i){
				x++;
				printf("%c",x+64);
			}
			else{
				if(i>n){
					printf("%c",z+64);
					z--;
				}
				else{
					printf("%c",y+64);
					y--;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
