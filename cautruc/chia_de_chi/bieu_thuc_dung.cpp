#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
  string s;
  cin>>s;
  stack<char> stk;
  int xoa=0,res=0;
  for(int i=0;i<s.size();i++)
  {
     if(stk.size()==0)//stack rong thi day dau ngoac vao
     {
	    stk.push(s[i]);
	 }
	 else if(stk.top()=='['&&s[i]==']')//neu phan dau cua stack va phan tu s[i] hop thanh []
	 {
	 	stk.pop();
	 	xoa+=2;//tinh gia tri de choc nua tinh them so lan swap
	 }
	 else if(stk.top()==']'&&s[i]=='[')//neu phan dau cua stack va phan tu s[i] hop thanh ][
	 {
	 	res+=stk.size()+xoa;
	 	stk.pop();
	 }
	 else if(s[i]=='[')
	 {
	 	stk.push(s[i]);
	 }
	 else if(stk.top()==']'&&s[i]==']')
	 {
	 	stk.push(s[i]);
	 }
	 if(stk.size()==0) xoa=0;
	 
  }
  cout<<res<<endl;
}
}
