#include<iostream>
#include<string>
using namespace std;
main(){
	int n;
	cin>>n;
	int F[60][60]={0};
	string s;
	cin.ignore();
	for(int i=1;i<=n;i++){
		getline(cin,s);
		for(int j=0;j<s.length();j++){
			if(s[j] != ' '){
				int x=s[j]-'0';
				F[i][x]=1;
			}
		}
	}
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(j>i){
				cout<<i<<" "<<j<<endl;
			}
}
