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
	stack<int> sta;
    while (cin>>s)
    {
     if(s=="show")
     {
	    if(!sta.empty())
	    {
		  PrintStack(sta);
		  cout<<endl;
		}
		else
		{
		 cout<<"empty"<<endl;
		 continue;
		}
	 }
	 else if(s=="pop")
	 {
	   if(!sta.empty())
	   {
	   sta.pop();
	   }
	 }
	 else if(s=="push")
	 {
     cin>>n;
     sta.push(n);
      
	 }
    }
}
