#include<iostream>
#include<deque>
using namespace std;
deque<int> myQ;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSHFRONT"){
			int x;
			cin>>x;
			myQ.push_front(x);
		}
		else if(s=="PRINTFRONT"){
			if(!myQ.empty())
				cout<<myQ.front()<<endl;
			else 
				cout<<"NONE"<<endl;
		}
		else if(s=="POPFRONT"){
			if(!myQ.empty())
				myQ.pop_front();
		}
		else if(s=="PUSHBACK"){
			int x;
			cin>>x;
			myQ.push_back(x);
		}
		else if(s=="PRINTBACK"){
			if(!myQ.empty())
				cout<<myQ.back()<<endl;
			else
				cout<<"NONE"<<endl;
		}
		else{
			if(!myQ.empty())
				myQ.pop_back();
		}
	}
}
