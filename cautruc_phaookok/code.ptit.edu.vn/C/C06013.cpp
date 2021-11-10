#include<stdio.h>
#include<string.h>
int kt(char x[]){
	if(x[0]=='0') return 0; 
	for(int i=0;i<strlen(x)-1;i++){
		if(x[i]<'0'||x[i]>'9') return 0;
	}
	return 1;
	
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[1005];
		int a[10]={0};
		fgets(s, sizeof(s),stdin);
		if(kt(s)==0) printf("INVALID\n");
		else{
			for(int i=0;i<strlen(s)-1;i++){
				a[s[i]-'0'] ++;
			}
			int check = 1;
			for(int i=0;i<10;i++){
				if(a[i]==0) {
					printf("NO\n");
					check = 0;
					break;
				}
				
			}
			if(check == 1) printf("YES\n");
		}
	}
	return 0;
}
