#include<iostream>
#include<queue>
using namespace std;
queue<int> myQ;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int x;
			cin>>x;
			myQ.push(x);
		}
		else if(s=="POP"){
			if(!myQ.empty())
				myQ.pop();
		}
		else{
			if(!myQ.empty())
				cout<<myQ.front()<<endl;
			else 
				cout<<"NONE"<<endl;
		}
	}
}
