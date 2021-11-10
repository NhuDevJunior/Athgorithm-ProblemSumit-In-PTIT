#include <stdio.h>
#include <math.h>
int b[2000];
void snt(int n){
	for(int i=2;i<=n;i++) b[i]=1;
	for (int i=2;i*i<=n;i++){
		if(b[i]){
			for(int j=i*i;j<=n;j+=i) b[j]=0;
		}
	}
}
int main(){
	snt(1500);
	int n,dem,index,max=0,min=0;
	scanf("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++){
		dem=0;
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(b[a[i][j]]==1) dem++;
			if(dem>max) max=dem;
		}
		if(max>min) {
			min = max;
			index = i;
		}
	}
	printf("%d\n",index+1);
	for(int i=0;i<n;i++){
		if(b[a[index][i]]==1) printf("%d ",a[index][i]);
	}
	return 0;
}
