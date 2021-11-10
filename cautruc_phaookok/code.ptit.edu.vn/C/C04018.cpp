#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		int n,dem=0;;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		for(int i=1;i<n;i++){
			if(a[i]==a[i-1]) dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}
