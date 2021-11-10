#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		
		int n,m,k;
		scanf("%d%d%d",&n,&m,&k);
		int a[n],b[m];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<m;i++){
			scanf("%d",&b[i]);
		}
		printf("Test %d:\n",q);
		for(int i=0;i<(n+m);i++){
		if(i<k) printf("%d ",a[i]);
		else if(i<k+m) printf("%d ",b[i-k]);
		else printf("%d ",a[i-m]);
		}
		printf("\n");
	}
	return 0;
}
