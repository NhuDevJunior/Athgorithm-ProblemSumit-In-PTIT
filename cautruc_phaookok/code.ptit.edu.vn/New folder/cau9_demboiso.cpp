#include<iostream>
#include<queue>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		queue<long long> Q;
		Q.push(9);
		int n;
		cin>>n;
		while(!Q.empty()){
			long long x=Q.front();
			if(x%n==0){
				cout<<x<<endl;
				break;	
			}
			
			else{
				Q.push(x*10);
				Q.push(x*10+9);
			}
			Q.pop();	
		}
	}
}
