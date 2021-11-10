#include <stdio.h>
#include <math.h>
int b[2000000];
void snt(int n){
	for(int i=2;i<=n;i++) b[i]=1;
	for (int i=2;i*i<=n;i++){
		if(b[i]){
			for(int j=i*i;j<=n;j+=i) b[j]=0;
		}
	}
}
int main(){
	int n;
	long long s=0;
	scanf("%d",&n);
	int a[n],max=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max) max=a[i];
	}
	snt(max);
	for(int i=0;i<n;i++){
		if(b[a[i]]==1) s+=a[i];
		else {
			for(int j=2;j*j<=a[i];j++){
				if(b[j]==1){
					while(a[i]%j==0){
						a[i]/=j;
						s+=j;
					}
				}
				if(b[a[i]]==1) {
					s+=a[i];
					break;
				}
			}
		}
		
	}
	printf("%lld",s);
	return 0;
	
}
