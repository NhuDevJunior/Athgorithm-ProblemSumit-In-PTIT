#include<stdio.h>
#include<string.h>
int main(){
	char s[105];
	fgets(s,sizeof(s),stdin);
	const char x[2]=" ";
	char *token;
	token = strtok(s, x);
	while(token != NULL ){
		printf("%s\n",token);
		token = strtok(NULL, x);
	}
}
