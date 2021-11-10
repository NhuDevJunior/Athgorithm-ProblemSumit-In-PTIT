#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
  	stack<char> st;
  	int dem=0;
  	string s;
  	cin>>s;
  	int l=s.size();
  	for(int i=0;i<l;i++)
  	{
  	   if(st.size()!=0)
  	   {
       char s_sau=s[i];
       char s_truoc=st.top();
//       cout<<s1<<s2;
       if(s_truoc=='('&&s_sau==')')
       {
	      st.pop();
	      dem++;
	   }
	   else
	   {
	      st.push(s[i]);
	   }
	   }
	   else
	   {
	    st.push(s[i]);
	   }
	   
	}
	cout<<dem*2<<endl;
    t--;
  }

}
