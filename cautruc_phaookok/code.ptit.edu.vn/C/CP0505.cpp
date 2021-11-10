#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int x[5], y[5], z[5];
		for(int i=0;i<4;i++){
			scanf("%d%d%d",&x[i],&y[i],&z[i]);
		}
		int A=x[1]-x[0], B=x[2]-x[0], C=x[3]-x[0];
		int a=y[1]-y[0], b=y[2]-y[0], c=y[3]-y[0];
		int d=z[1]-z[0], e=z[2]-z[0], f=z[3]-z[0];
		int D=a*e-b*d, E=d*B-A*e, F=A*b-a*B;
		int q=D*C+E*c+F*f;
		if(q==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
