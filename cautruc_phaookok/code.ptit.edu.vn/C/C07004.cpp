#include <stdio.h>
#include <string.h>
#include <math.h>
int UCLN(int a, int b){
    while (a!=b){
        if (a > b) a = a - b;
        if (a < b) b = b - a;
    }
    return a;
}
int BCNN(int a, int b)
{
    return a * b / UCLN(a, b);
}
typedef struct PhanSo
{
    int tuso, mauso;
} PS;
PS rutgon(PS a){
	PS c;
	c.tuso = a.tuso / UCLN(a.tuso, a.mauso);
	c.mauso = a.mauso / UCLN(a.tuso, a.mauso);
	return c;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		PS a, b, c, d;
		scanf("%d%d%d%d",&a.tuso,&a.mauso,&b.tuso,&b.mauso);
		a=rutgon(a);
		b=rutgon(b);
		int x= BCNN(a.mauso, b.mauso)/a.mauso;
		int y= BCNN(a.mauso, b.mauso)/b.mauso;
		a.tuso = a.tuso*x;
		a.mauso = BCNN(a.mauso, b.mauso);
		b.tuso = b.tuso*y;
		b.mauso = BCNN(a.mauso, b.mauso);
		c.tuso = a.tuso + b.tuso;
		c.mauso = a.mauso;
		d.tuso = a.tuso;
		d.mauso = b.tuso;
		c=rutgon(c);
		d=rutgon(d);
		printf("Case #%d:\n",q);
		printf("%d/%d %d/%d\n",a.tuso,a.mauso,b.tuso,b.mauso);
		printf("%d/%d\n",c.tuso,c.mauso);
		printf("%d/%d\n",d.tuso,d.mauso);
	}
	return 0;
}
