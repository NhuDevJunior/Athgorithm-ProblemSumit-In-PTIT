#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int max=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(max<a[i]) max=a[i];
		}
		printf("%d\n",max);
		for(int i=0;i<n;i++){
			if(max==a[i]) printf("%d ",i);
		}
		
	}
	return 0;
}
