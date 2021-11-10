#include<stdio.h>
#include<string.h>
int main(){
	
		char s1[105];
		char s2[105];
		fgets(s1, sizeof(s1),stdin);
//		fflush(stdin);
//		fgets(s2, sizeof(s2),stdin);
		fgets(s2, sizeof(s2),stdin);
//		fflush(stdin);
		int p;
		scanf("%d",&p);
		for(int i=0;i<strlen(s1);i++){
			if(i==p-1) {
				for(int j=0;j<strlen(s2)-1;j++) printf("%c",s2[j]);
			}
			
			if(i<p-1) printf("%c",s1[i]);
			if(i>p-1) printf("%c",s1[i-1]);
			
		}
		
	return 0;
}
