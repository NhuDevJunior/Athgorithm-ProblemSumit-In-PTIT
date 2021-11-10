#include<iostream>
#include<queue>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		queue<long long> myqueue;
		int n;
		cin>>n;
		while(n--){
		
		int x;// yeu cau
		cin>>x;
		if(x==1){
			cout<<myqueue.size()<<endl;
		}
		else if(x==2){
			if(myqueue.empty())
				cout<<"YES"<<endl;
			else 
				cout<<"NO"<<endl;
		}
		else if(x==3){
			int z;//so can them vao cuoi
			cin>>z;
			myqueue.push(z);
		}
		else if(x==4){
			if(!myqueue.empty())
				myqueue.pop();
		}
		else if(x==5){
			if(!myqueue.empty())
				cout<<myqueue.front()<<endl;
			else 
				cout<<-1<<endl;
		}
		else{
			if(!myqueue.empty())
				cout<<myqueue.back()<<endl;
			else 
				cout<<-1<<endl;
		}
	}
	}
}
