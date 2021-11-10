#include <stdio.h>
#include <math.h>
int b[1005];
void snt(int n){
	for(int i=2;i<=n;i++) b[i]=1;
	for (int i=2;i*i<=n;i++){
		if(b[i]){
			for(int j=i*i;j<=n;j+=i) b[j]=0;
		}
	}
}
int main(){
	snt(1001);
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(b[a[i]]==1) printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}
