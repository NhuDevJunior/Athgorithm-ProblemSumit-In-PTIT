#include<stdio.h>
#include<math.h>
int main(){
	int n, k=1, d=0;
	scanf("%d",&n);
	int a[150][150];
	int x=n-1;
	int y=n-1;
	while(d<=n/2){
		for(int i=d;i<=y;i++) a[d][i]=k++;
		for(int i=d+1;i<=x;i++) a[i][y]=k++;
		for(int i=y-1;i>=d;i--) a[x][i]=k++;
		for(int i=x-1;i>d;i--) a[i][d]=k++;
		d++;x--;y--;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
