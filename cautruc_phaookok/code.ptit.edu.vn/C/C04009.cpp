#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	int x=0,y=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if((a[i]%2)==0){
			b[x]=a[i];
			x++;
		}
		else{
			c[y]=a[i];
			y++;
		}
	}
	for(int i=0;i<x;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	for(int i=0;i<y;i++){
		printf("%d ",c[i]);
	}
	return 0;
}
