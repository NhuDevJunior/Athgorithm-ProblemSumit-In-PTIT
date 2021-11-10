#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	char n[1000];
	gets(n);
	for(int i=0;i<strlen(n);i++){
		if((int)n[i]>=97){
			n[i]=(int)n[i]-32;
		}
		printf("%c",n[i]);
	}
	return 0;
}
