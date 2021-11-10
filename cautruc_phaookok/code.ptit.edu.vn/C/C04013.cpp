#include<stdio.h>
int main(){
		int n,dem=0;
		scanf("%d",&n);
		int a[n],d[100006];
		for(long long i=0;i<100006;i++){
			d[i]=0;
		}
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			d[a[i]]++;
			if(d[a[i]]>1) a[i]=-1;
		}
		for(int i=0;i<n;i++){
			if(d[a[i]]==1) dem++;
		}
		printf("%d\n",dem);
		for(int i=0;i<n;i++){
			if(d[a[i]]==1) printf("%d ",a[i]);
		}
		
	return 0;
}
