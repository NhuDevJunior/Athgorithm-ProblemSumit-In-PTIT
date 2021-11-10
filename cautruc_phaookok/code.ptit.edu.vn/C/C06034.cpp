#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int a[20], k;
    char KT[20];
    gets(KT);
    int len = strlen(KT);
    for(int i = 0; i < len; i++){
        if(KT[i] == 'I') a[i] = 1;
        if(KT[i] == 'V') a[i] = 5;
		if(KT[i] == 'X') a[i] = 10;
       	if(KT[i] == 'L') a[i] = 50;
		if(KT[i] == 'C') a[i] = 100;
		if(KT[i] == 'D') a[i] = 500;
		if(KT[i] == 'M') a[i] = 1000;
    }
    k = a[len-1];
    for(int i = len-1; i > 0; i--)
    {
        if(a[i] > a[i-1])
            k = k - a[i-1];
        else if(a[i] == a[i-1] || a[i] < a[i-1])
            k = k + a[i-1];
    }
    printf("%d", k);
   return 0;
}
