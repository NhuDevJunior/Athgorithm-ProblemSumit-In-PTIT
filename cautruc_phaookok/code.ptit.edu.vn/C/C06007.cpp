#include<stdio.h>
#include<conio.h>
#include<string.h>


#define SEPARATOR " "

int main()
{
char s[]= "mon thcs2 la mon 2tc";
char s1[]= "mon";
char *p;

p = strtok(s, SEPARATOR);
while (p != NULL && p!=s1) {
printf("%s\n", p);
p = strtok(NULL, SEPARATOR);

}
return 0;
}
