#include<bits/stdc++.h>
using namespace std;
void reverseString(string str, int k)// abcdef     k = 2
{
    int l=str.length();// l=6
    cout<<"do dai sau:"<<l<<endl;
    int du = l%k; // du=0
    int ln = l-du;//6
    int flag = 1;
    string s="";
    int i=0;
    for(int i=0;i<ln;i=i+k)// i=0   i=2     i=4     i=6
    {
    	if(flag==1)
    	{
    		for(int j=i+k-1;j>=i;j--)
    		{
    			s =s +str[j];
			}
			cout<<"flag is: "<<flag<<endl;
			flag =0;
			cout<<"i la: "<<i<<endl;
			cout<<"chuoi hien tai la: "<<s<<endl;
		}
		else
		{
		    for(int j=i;j<i+k;j++)
    		{
    			s =s +str[j];
			}	
			cout<<"flag is: "<<flag<<endl;
			flag=1;
			cout<<"i la: "<<i<<endl;
			cout<<"chuoi hien tai la: "<<s<<endl;
		}
	}
	for(int t=ln;t<l;t++)
	{
		s=s+str[t];
	}
	cout<<"chuoi hien tai la: "<<s;
	cout<<"size: "<<s.length();
}
int main(){
    reverseString("osjxapwnyzerinsugboiipgaeyzaqumibiakvxhqxowaohxsasglifywmszxtisrepmbqtrvwdnahmicksoqstomiuztpzkekldv",64);

}
