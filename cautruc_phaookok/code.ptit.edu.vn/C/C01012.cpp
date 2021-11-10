#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[5];
		scanf("%s",s);
		if((int)s[0]<=90) s[0]=(int)s[0]+32;
		else if((int)s[0]<=122) s[0]=(int)s[0]-32;
		printf("%c\n",s[0]);
	}
	return 0;
}
