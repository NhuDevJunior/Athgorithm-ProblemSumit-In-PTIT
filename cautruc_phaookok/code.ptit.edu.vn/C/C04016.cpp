#include<stdio.h>
#include<math.h>
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
	snt(100005);
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		long long n,max=0;
		scanf("%lld",&n);
		long long a[100005];
		long long dd[100005]={0};
		for(long long i=0;i<n;i++){
			scanf("%lld",&a[i]);
			if(max<a[i]) max=a[i];
			if(b[a[i]]==1){
				dd[a[i]]++;	
				if(dd[a[i]]>1) a[i]=-1;
			}
		}
		printf("Test %d:\n",q);
		for(long long i=0;i<=max;i++){
			if(dd[i]>0) printf("%lld xuat hien %lld lan\n",i,dd[i]);
		}
	}
		return 0;
}

