#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char n[10000];
	gets(n);
	int chu=0,so=0,kytu=0;
	for(int i=0;i<strlen(n);i++){
		if((int)n[i]>=48&&(int)n[i]<=57) so++;
		else if(((int)n[i]>=65&&(int)n[i]<=90)||((int)n[i]>=97&&(int)n[i]<=122)) chu++;
		else kytu++;
	}
	printf("%d %d %d",chu,so,kytu);
	return 0;
}

