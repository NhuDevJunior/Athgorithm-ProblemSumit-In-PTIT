#include<iostream>
#include<stack>
#include<string>
using namespace std;

char c[100005];
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>c;
		stack<char> myS;
		for(int i=0;c[i] != '\0';i++){
			if(c[i]=='(' || c[i]=='[' || c[i]=='{')
				myS.push(c[i]);
			else 
				if(!myS.empty()){
					if(c[i]==')')
						if(myS.top()=='(')
							myS.pop();
					if(c[i]==']')
						if(myS.top()=='[')
							myS.pop();
					if(c[i]=='}')
						if(myS.top()=='{')
							myS.pop();
				}
		}
		if(myS.empty())
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
}
