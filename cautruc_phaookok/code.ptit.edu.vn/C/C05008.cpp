#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		int m,n,x,y;
	int max=0;
	scanf("%d%d",&m,&n);
	int a[m][n];
	int b[11]={0};
	int c[11]={0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			b[i]+=a[i][j];
			if(b[i]>max){
				max=b[i];
				x=i;
			}
		}
	}
	int min=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i!=x) {
				c[j]+=a[i][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		if(c[i]>min){
			min=c[i];
			y=i;
		}
	}
	printf("Test %d:\n",q);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i!=x&&j!=y) printf("%d ",a[i][j]);
		}
		if(i!=x) printf("\n");
	}
	}
	
	return 0;
}
