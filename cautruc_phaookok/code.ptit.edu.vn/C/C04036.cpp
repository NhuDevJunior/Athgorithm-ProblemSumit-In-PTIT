#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,a,b,c,d,e,f,g,i,k;
		scanf("%d",&n);
		a=n/1000;
		n=n-a*1000;
		b=n/500;
		n=n-b*500;
		c=n/200;
		n=n-c*200;
		d=n/100;
		n=n-d*100;
		e=n/50;
		n=n-e*50;
		f=n/20;
		n=n-f*20;
		g=n/10;
		n=n-g*10;
		i=n/5;
		n=n-5*i;
		k=n/2;
		n=n-k*2;
		printf("%d\n",a+b+c+d+e+f+i+g+k+n);
	}
	return 0;
}
