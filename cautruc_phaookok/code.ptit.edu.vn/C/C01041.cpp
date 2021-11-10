#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        double xA,xB,xC,yA,yB,yC;
        double AB,AC,BC;
        scanf("%lf%lf%lf%lf%lf%lf",&xA,&yA,&xB,&yB,&xC,&yC);
        if((xA==xB&&yA==yB)|| (xA==xC&&yA==yC)|| (xC==xB&&yC==yB)) printf("INVALID\n");
        else{
            if((xC-xA)*(yB-yA)==(xB-xA)*(yC-yA)) printf("INVALID\n");
            else
            {
                AB=sqrt((xA-xB)*(xA-xB)+(yA-yB)*(yA-yB));
                AC=sqrt((xA-xC)*(xA-xC)+(yA-yC)*(yA-yC));
                BC=sqrt((xC-xB)*(xC-xB)+(yC-yB)*(yC-yB));
                printf("%.3lf\n",AB+AC+BC);
            }
        }
    }
    return 0;
}
