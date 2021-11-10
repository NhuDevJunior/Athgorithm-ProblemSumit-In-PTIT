#include<stdio.h>
int ucln(int a, int b){
	while(a!=b){
		if(a>b) a=a-b;
		if(b>a) b=b-a;
	}
	return a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",ucln(a, b));
	}
	return 0;
}
