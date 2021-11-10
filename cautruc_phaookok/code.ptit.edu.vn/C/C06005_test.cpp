#include<stdio.h>
#include<string.h>
int kt(char s[] ,char a[]) { 
    if(strcmp(s,a)!=0) return 0;
    else return 1;
}
 
int main(){
    char s[105];
    char a[105][105];
    int b[105]={0};
    gets(s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]-'A'+'a';
    }
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
        for(int j=0;j<=i;j++){
            if(kt(a[i],a[j])==1) b[i]++;
        }
    
    }
    for(int i=0;i<len;i++){
        int check = 1, index=i;
        for(int j=0;j<i;j++){
            if(kt(a[i],a[j])== 1) {
                check = 0;
                break;
            }
        }
        for(int j=i;j<len;j++){
        	if(kt(a[i],a[j])== 1) {
                index =j;
            }
		}
        if(check==1) printf("%s %d\n",a[i],b[index]); 
    }
    return 0;
}
