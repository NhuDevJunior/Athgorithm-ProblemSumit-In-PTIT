#include<stdio.h>
#include<string.h>
int kt(char x[]){
	int a=0;
	for(int i=0;i<strlen(x)-1;i++){
		a+=(x[i]-'0');
	}
	return a;
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[505];
		fgets(s, sizeof(s),stdin);
		int i=0,len = strlen(s) - 2,check = 1;
		if(s[0]!='8'||s[len]!='8') printf("NO\n");
		else{
			if(kt(s)%10!=0) printf("NO\n");
			else{
				while(i<=len){
				if(s[i]!=s[len]){
					printf("NO\n");
					check = 0;
				}
				i++;len--;
				if(check==0) break;
			}
			if(check == 1 ) printf("YES\n");
			}
			
		}
		
	}
	return 0;
}
