//xau nhi phan ke tiep
#include<bits/stdc++.h>
using namespace std;
bool cauhinhcuoi = false;
void sinhbit(int x[],int n)
{
  int i = n;
      while (i > 0 && x[i] == 1) {
        x[i] = 0;
        i--;
    }
    if(i == 0) 
    {
	cauhinhcuoi=true;
	}
    else x[i] = 1;
	 
}
int checkhh(int x[],int n)
{
  for(int i=1;i<n;i++)
  {
     if(x[i]==1 && x[i+1]==1)
     {
	   return 1;
	 }
  }
  return 0;
}
void printResult(int x[],int n)
{
  if(x[1]==1&&x[n]==0&&checkhh(x,n)==0)
  {
  for(int i = 1 ;i<=n;i++)
  {
    if(x[i]==1)
    {
	cout<<'H';
	}
	else
	{
	cout<<'A';
	}
  }
  cout<<endl;
}
}
int main ()
{
  int t,n;
  int x[1025];
  cin>>t;
  while(t>0)
  {
  cauhinhcuoi = false;
  cin>>n;	
  for(int i=1;i<=n;i++)
    { 
       x[i]=0;
    }
  while(cauhinhcuoi!=true)
  {
  printResult(x,n);
  sinhbit(x,n);
  }
  t--;
  }
}
