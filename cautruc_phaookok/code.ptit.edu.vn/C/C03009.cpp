#include<stdio.h>
#include<math.h>
int kt(int n){
	int t=1;
	for(int i=2;i<sqrt(n);i++){
    	if(n%i==0){
    		t=t+i;
    		t=t+(n/i);
		}
	}
	if((int) sqrt(n)== (float) sqrt(n)){
		t=t+ (int) sqrt(n);
	}
	return t;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<=b){
    	for(int i=a;i<=b;i++){
    		if(kt(i)==i) printf("%d ",i);
		}
	}
	else{
		for(int i=b;i<=a;i++){
    	if(kt(i)==i) printf("%d ",i);
	}
	}
    return 0;
}
