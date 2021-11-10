#include <stdio.h>
#include <math.h>
int b[2000000];
void snt(int n){
	for(int i=2;i<=n;i++) b[i]=1;
	for (int i=2;i*i<=n;i++){
		if(b[i]){
			for(int j=i*i;j<=n;j+=i) b[j]=0;
		}
	}
}
int main(){
	int n,max=0;
	scanf("%d",&n);
	int a[n][n];
	long long s=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]>max) max=a[i][j];
		}
	}
	snt(max);
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(b[a[i][j]]==1) s+=a[i][j];
		}
	}
	printf("%lld",s);
	return 0;
}
