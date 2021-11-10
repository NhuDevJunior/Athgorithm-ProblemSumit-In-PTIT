#include<bits/stdc++.h>
using namespace std; 
string reverseString(string str, int k)
{
	
	int l = str.length();
	int flag = 1;
	string s ="";
	for(int i=0;i<l;i=i+k)
	{
	   if(i+k-1>l)
	   {
	     break;
	   }
	   if(flag ==1)
	   {
	      for(int j=i+k-1;j>=i;j--)
	      {
		     s = s+str[j];
		  }
		  flag=0;
	   }
	   else
	   {
	      for(int j=i;j<=i+k-1;j++)
	      {
		     s = s+str[j];
		  }
		  flag=1;
	   }
	}
	int du = l%k;
	int nguyen = l/k;
	if(du!=0&&s.length()!=l)
	{
      for(int i=l-du;i<l;i++)
      {
	    s=s+str[i];
	  }
	}
      
   return s;	
}
int main(){
  cout<<""<<reverseString("nqktf",3);
}
