#include<iostream>
#include<stack>
using namespace std;
string S;
int top=-1;
int A[205];
void day(int x){
	top++;
	A[top]=x;
}
void layra(){
	top--;
}
void inkq(){
	for(int i=0;i<=top;i++)
		cout<<A[i]<<" ";
	cout<<endl;
}
int ktrong(){
	if(top==-1)
		return 1;
	return 0;
}
main(){
	while(cin>>S){
		if(S=="push"){
			int x;
			cin>>x;
			day(x);
		}
		if(S=="pop"){
			if(ktrong()==0)
				layra();
		}
		if(S=="show"){
			if(ktrong()==1)
				cout<<"empty"<<endl;
			else 
				inkq();
		}
	}
}
