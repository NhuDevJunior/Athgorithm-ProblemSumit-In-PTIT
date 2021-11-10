#include<iostream>
#include<stack>
using namespace std;
int A[100005];
int n;
int top=-1;
string S;

void dayvao(int x){
	top++;
	A[top]=x;
}
void layra(){
	top--;
}
void inkq(){
	cout<<A[top]<<endl;
}
int ktrong(){
	if(top==-1)
		return 1;
	else 
		return 0;
}
main(){
	cin>>n;
	while(n--){
		cin>>S;
		if(S=="PUSH"){
			int x;
			cin>>x;
			dayvao(x);
		}
		if(S=="POP"){
			if(ktrong()==0)
				layra();
		}
		if(S=="PRINT"){
			if(ktrong()==1)
				cout<<"NONE"<<endl;
			else 
				inkq();
		}
	}
}
