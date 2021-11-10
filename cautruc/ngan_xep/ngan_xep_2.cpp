#include <bits/stdc++.h>
using namespace std;
void PrintStack(stack<int> s)
{
    stack<int> temp;
    while (s.empty() == false)
    {
        temp.push(s.top());
        s.pop();
    }  
 
    while (temp.empty() == false)
    {
        int t = temp.top();
        cout << t << " ";
        temp.pop();
 
        // To restore contents of
        // the original stack.
        s.push(t); 
    }
}
int main()
{
	string s;
	int n;
	int q;
	stack<int> sta;
	cin>>q;
    while (q--)
    {
     cin>>s;
     if(s=="PRINT")
     {
	    if(!sta.empty())
	    {
		  cout<<sta.top();
		  cout<<endl;
		}
		else
		{
		 cout<<"NONE"<<endl;
		 continue;
		}
	 }
	 else if(s=="POP")
	 {
	   if(!sta.empty())
	   {
	   sta.pop();
	   }
	 }
	 else if(s=="PUSH")
	 {
     cin>>n;
     sta.push(n);
      
	 }
    }
}
