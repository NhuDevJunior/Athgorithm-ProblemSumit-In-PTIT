#include<bits/stdc++.h>
using namespace std;
void in(string s[],int k)
{
  for(int i=1;i<=k;i++)
  {
    cout<<s[i]<<" ";
    
  }
  cout<<endl;
}
int main()
{
int t;
cin>>t;
while(t>0)
{
	int n;
	cin>>n;
	int k=1;
	//so luong ma gray khi voi do dai n
	for(int i=1;i<=n;i++)
	{
	   k*=2;
	}
	string s[k+5];
	s[1]="0";
	s[2]="1";
	if(n>1)
	{
	  //khoi tao moc doi xung cho ma gray n =2
	  int mocdx=2;
	  for(int i=2;i<=n;i++)
	  {
	    int l=1;
	    //so luong ma gray voi do dai i
	    for(int j=1;j<=i;j++)
	    {
		  l*=2;
		}
		for(int j=1;j<=mocdx;j++)
		{
			//thang to nhap bang thang be nhat +1 vo dang trc
		   s[l-j+1]= "1"+s[j];
		   //thang be nhat bang thang be nhat +0 vo dang trc
		   s[j]="0"+s[j];
		}
		//cap nhat lai do dai cho mocdx moi khi tang i
		mocdx=l;
	  }
	}
	in(s,k);
    t--;
}

}
