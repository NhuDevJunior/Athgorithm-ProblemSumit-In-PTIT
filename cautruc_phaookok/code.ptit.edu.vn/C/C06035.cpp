#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		int dem = 0;
		char s[21];
		fgets(s,sizeof(s),stdin);
		int i=0,len=strlen(s)-1-1;
		while(i<len){
			if(s[i]!=s[len]) dem++;
			i++;len--;
		}
		if(i==len&&dem==0) printf("YES\n");
		else{
			if(dem==1) printf("YES\n");
		else printf("NO\n");
		}
		
	}
	return 0;
}
