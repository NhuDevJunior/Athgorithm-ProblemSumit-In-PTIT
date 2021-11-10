#include<stdio.h>
#include<string.h>
int kt(char x){
	if((x - '0')%2==0) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[505];
		fgets(s, sizeof(s),stdin);
		int i=0,len = strlen(s) - 2,check = 1;
		while(i<=len){
			if(s[i]!=s[len]||kt(s[i])==0){
				printf("NO\n");
				check = 0;
			}
			i++;len--;
			if(check==0) break;
		}
		if(check == 1 ) printf("YES\n");
	}
	return 0;
}
