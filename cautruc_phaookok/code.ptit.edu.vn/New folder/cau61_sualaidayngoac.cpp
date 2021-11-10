#include<iostream>
#include<stack>
#include<string>
using namespace std;
char x[100005];
main(){
	int t;
	cin>>t;
	while(t--){
		stack<char> mys;
		cin>>x;
		int dem=0;
		mys.push(x[0]);
		for(int i=1; x[i] != '\0'; i++){
			if(x[i]=='(')
				mys.push(x[i]);
			if(x[i]==')')
				if(mys.top()==')')
					mys.push(')');
				else 
					if(!mys.empty())
						mys.pop();
		}
		while(!mys.empty()){
			char a=mys.top();
			mys.pop();
			char b=mys.top();
			mys.pop();
			if(a==b)
				dem=dem+1;
			else 
				dem=dem+2;
		}
		cout<<dem<<endl;
	}
}
