#include<stdio.h>
#include<string.h>
int main(){
	char s[105];
	char n[105];
	char a[105][105];
	gets(s);
	gets(n);
	char x[2]=" ";
	int len=0;
	char *token;
	token = strtok(s, x);
	while(token != NULL ){
		strcpy(a[len],token);
		len++;
		token = strtok(NULL, x);
	}
	for(int i=0;i<len;i++){
		if(strcmp(a[i],n)!=0) printf("%s ",a[i]);
	}
}
