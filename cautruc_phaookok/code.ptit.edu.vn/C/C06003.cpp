#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[105];
	gets(s);
	char x[2]=" ";
	int len=0;
	char *token;
	token = strtok(s, x);
	while(token != NULL ){
		
		len++;
		token = strtok(NULL, x);
	}
	printf("%d\n",len);
	}
	return 0;
}
