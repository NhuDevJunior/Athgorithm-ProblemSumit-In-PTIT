#include<stdio.h>
#include<string.h>
int main(){
	char s[105];
	char n[105];
	char a[105][105];
	char b[105][105];
	char c[105][105];
	gets(s);
	fflush(stdin);
	gets(n);
	fflush(stdin);
	char x[2]=" ";
	int l1=0,l2=0;
	char *token;
	token = strtok(s, x);
	while(token != NULL ){
		strcpy(a[l1],token);
		l1++;
		token = strtok(NULL, x);
	}
	token = strtok(n, x);
	while(token != NULL ){
		strcpy(b[l2],token);
		l2++;
		token = strtok(NULL, x);
	}
	int l3=0;
	for(int i=0;i<l1;i++){
		int check=1;
		for(int j=0;j<l2;j++){
			if(strcmp(a[i],b[j])==0){
				check=0;
				break;
			}
		}
		if(check!=0) {
			strcpy(c[l3],a[i]);
			l3++;
		}
	}
	printf("%s",c[0]);
	for(int i=1;i<l3;i++){
		int k=0;
		for(int j=0;j<i;j++){
			if(strcmp(c[i],c[j])==0) {
				k=1;
				break;
			}
		}
		if(k==0) printf(" %s",c[i]);
	}
	return 0;
}
