#include<iostream>
#include<queue>
using namespace std;


struct bien{
	int dem;
	string s;
	bien(){
		dem=0;
	}
	bien(string S, int dem1){
		s=S;
		dem=dem1;
	}
};
string spinleft(string st){
	swap(st[0],st[2]);
	swap(st[0],st[6]);
	swap(st[6],st[8]);
	return st;
}
string spinright(string st){
	swap(st[2],st[4]);
	swap(st[2],st[8]);
	swap(st[8],st[10]);
	return st;	
}
int main(){
	string s1="0 0 0 0 0 0";
	string s2="0 0 0 0 0 0";
	for(int i=0;i<=10;i=i+2)
		cin>>s1[i];
	for(int i=0;i<=10;i=i+2)
		cin>>s2[i];
		
		
	queue <bien> Q;
	Q.push(bien(s1,0));
	
	while(!Q.empty()){
		bien temp=Q.front();
		Q.pop();
		if(temp.s==s2){
			cout<<temp.dem<<endl;
			return 0;
		}
		else{
			string str1=spinleft(temp.s);
			Q.push(bien(str1,temp.dem+1));
			string str2=spinright(temp.s);
			Q.push(bien(str2,temp.dem+1));
		}
	}
}
 
