#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+1],b[m+1];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d",&b[i]);
	}
	int k;
	scanf("%d",&k);
	for(int i=1;i<=(n+m);i++){
		if(i<=k) printf("%d ",a[i]);
		if(i>(k+m)) printf("%d ",a[i-m]);
		if(i>k&&i<=k+m) printf("%d ",b[i-k]);
	}
	return 0;
}
