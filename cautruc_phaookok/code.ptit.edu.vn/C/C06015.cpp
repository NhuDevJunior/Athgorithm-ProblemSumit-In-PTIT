#include<stdio.h>
#include<string.h>
void chuanhoa(char s[]){
	s[0] = s[0] -'a' + 'A';
	for(int i=1;i<strlen(s);i++){
		s[i] = s[i] - 'A' +'a';
	}
}
void viethoa(char s[]){
	for(int i=0;i<strlen(s);i++){
		s[i] = s[i] - 'a' +'A';
	}
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[100];
		char a[105][105];
		fgets(s, sizeof(s),stdin);
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
			if(a[i][0]>='a'&&a[i][0]<='z') a[i][0] = a[i][0] -'a' +'A';
			for(int j=1;j<strlen(a[i]);j++){
				if(a[i][j]>='A'&&a[i][j]<='Z') a[i][j] = a[i][j] - 'A' + 'a';
			} 
		}
		for(int i=0;i<strlen(a[0]);i++){
			if(a[0][i]>='a'&&a[0][i]<='z') a[0][i] = a[0][i] -'a' +'A';
		}
		
		for(int i=1;i<=len;i++){
			if(i==len) printf(", %s",a[0]);
			else	if(i==len-1) {
				for(int j=0;j<strlen(a[i])-1;j++){
					printf("%c",a[i][j]);
				}
			}
			else printf("%s ",a[i]);
		}
		printf("\n");
	}
	return 0;
}
