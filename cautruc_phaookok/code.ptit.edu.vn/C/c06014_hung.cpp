#include<stdio.h>
#include<string.h>
void solve() {
    char s[81]; gets(s);
    int len=strlen(s);
    for(int i=0; i<len; i++) {
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    char res[81][81]; int n=0;
    char *token=strtok(s, " ");
    while(token!=NULL) {
        strcpy(res[n++], token);
        token=strtok(NULL, " ");
    }
    for(int i=0; i<n; i++) {
        res[i][0]-=32;
        if(i==n-1) printf("%s", res[i]);
        else printf("%s ", res[i]);
    }
    printf("\n");
}
int main() {
    int t; scanf("%d\n", &t);
    while(t--) {
        solve();
    }
    return 0;
}
