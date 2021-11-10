#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double a,b,c,d,e,f,x,y,z;
		scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
		x=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		y=sqrt((e-c)*(e-c)+(f-d)*(f-d));
		z=sqrt((a-e)*(a-e)+(b-f)*(b-f));
		int ok=1;
		if(x+y<=z||y+z<=x||x+z<=y||x==0||y==0||z==0) ok=0;
		if(ok==0) printf("INVALID\n");
		else{
			double s=(x+y+z)/2.0;
			double h=sqrt(s*(s-x)*(s-y)*(s-z));
			printf("%.2lf\n",h);
		}
	}
}
