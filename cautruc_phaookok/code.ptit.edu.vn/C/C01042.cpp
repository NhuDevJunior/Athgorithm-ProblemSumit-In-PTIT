#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        double xA,xB,xC,yA,yB,yC;
        scanf("%lf%lf%lf%lf%lf%lf",&xA,&yA,&xB,&yB,&xC,&yC);
        double c=sqrt((xA-xB)*(xA-xB)+(yA-yB)*(yA-yB));
        double b=sqrt((xA-xC)*(xA-xC)+(yA-yC)*(yA-yC));
        double a=sqrt((xC-xB)*(xC-xB)+(yC-yB)*(yC-yB));
        if(a>abs(b-a)&&a<b+a&&b>abs(a-c)&&b<a+c&&c>abs(a-b)&&c<a+b){
        	double s=(1/4)*(sqrt((a+b+c)*(abs(a+b-c))*(abs(b+c-a))*(abs(c+a-b))));
        	printf("%.3lf\n",s);
		}
		else printf("INVALID\n");
    }
    return 0;
}
