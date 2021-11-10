#include<stdio.h>
#include<string.h>
int main(){
	char s[105];
	char a[105][105];
	gets(s);
	char x[2]=" ";
	int len=0;
	char *token;
	token = strtok(s, x);
	while(token != NULL ){
		strcpy(a[len],token);
		len++;
		token = strtok(NULL, x);
	}
	printf("%s",a[0]);
	for(int i=1;i<len;i++){
		int k=0;
		for(int j=0;j<i;j++){
			if(strcmp(a[i],a[j])==0) {
				k=1;
				break;
			}
		}
		if(k==0) printf(" %s",a[i]);
	}
}
