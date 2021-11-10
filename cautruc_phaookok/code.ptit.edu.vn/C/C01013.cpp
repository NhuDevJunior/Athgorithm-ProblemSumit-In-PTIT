#include<stdio.h>
int main(){
	char s[10];
	gets(s);
	if(((int)s[0]-48)+((int)s[4]-48) == ((int)s[8]-48)) printf("YES");
	else printf("NO");
	return 0;
}
