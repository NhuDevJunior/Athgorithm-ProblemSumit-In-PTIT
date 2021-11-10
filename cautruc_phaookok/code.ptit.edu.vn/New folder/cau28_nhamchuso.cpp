#include<iostream>
#include<math.h>
using namespace std;
int a,b;
int tongnho(int a){
	int sonho=0;
	int heso=0;
	while(a>0){
		int donvi=a%10;
		if(donvi==6)
			sonho=sonho+5*pow(10,heso);
		else 	
			sonho=sonho+donvi*pow(10,heso);
		a=a/10;
		heso++;
	}
	return sonho;
}
int tonglon(int a){
	int solon=0;
	int heso=0;
	while(a>0){
		int donvi=a%10;
		if(donvi==5)
			solon=solon+6*pow(10,heso);
		else 	
			solon=solon+donvi*pow(10,heso);
		a=a/10;
		heso++;
	}
	return solon;
}
main(){
	cin>>a>>b;
	int x=tongnho(a)+tongnho(b);
	int y=tonglon(a)+tonglon(b);
	cout<<x<<" "<<y;
}
