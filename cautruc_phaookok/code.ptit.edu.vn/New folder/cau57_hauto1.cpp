#include<iostream>
#include<stack>
#include<string>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		char kq[100];
		int dem=0;
		stack<char> S;
		cin>>str;
		cin.ignore();
		
		int z=str.length();
		for(int i=0;i<z;i++){
			if(str[i]=='(' || str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
				S.push(str[i]);
			if(str[i] >= 'a' && str[i] <= 'z')
				kq[dem++]=str[i];
			if(str[i]==')'){
				while(S.top() != '('){
					
					kq[dem++]=S.top();
					S.pop();
				}
			}
		}
		kq[dem]='\0';
		cout<<kq<<endl;
	}
}
