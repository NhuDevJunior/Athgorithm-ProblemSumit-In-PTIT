#include<iostream>
using namespace std;
main(){
	int tien[10]={1,2,5,10,20,50,100,200,500,1000};
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sototien=0;
		int i=9;
		while(n>0){
			sototien=sototien+n/tien[i];
			n=n%tien[i];
			i--;
		}
		cout<<sototien<<endl;
	}
}
