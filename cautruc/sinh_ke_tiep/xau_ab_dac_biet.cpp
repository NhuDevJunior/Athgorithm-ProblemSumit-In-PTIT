//xau nhi phan ke tiep
#include<bits/stdc++.h>
using namespace std;
bool cauhinhcuoi = false;
int k;
int tmp=0;
string kp[10000];
int checkaa(int x[],int n)
{
  x[n+1]=1;
  int dem=1;
  int duynhat=0;
  if(k!=1)
  {
  
  for(int i=1;i<=n;i++)
  {
  	    if(x[i]==0&&x[i+1]==0)
  	   {
  	      dem++;
	    }
	     else
	    {
	 	   if(dem==k)
	 	   {
	 	   duynhat++;
	       }
	 	    dem=1;
	    }
     } 
   if(duynhat==1) return 1;
   return 0;
  }
  else
  {
  for(int i=1;i<=n;i++)
  {
  	    if(x[i]==0&&x[i+1]==0)
  	   {
  	      return 0;
	    }
     } 
   return 1;
  }
  }
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
void printResult(int x[],int n)
{
cout<<tmp<<endl;
for(int i=1;i<=tmp;i++)
{
	cout<<kp[i]<<endl;
}
}
void intong(int x[],int n)
{
	if(checkaa(x,n)==1)
	{
    tmp++;
    kp[tmp]="";
    for(int i = 1 ;i<=n;i++)
  {
    if(x[i]==0)
    {
	kp[tmp]=kp[tmp]+"A";
	}
	else
	{
	kp[tmp]=kp[tmp]+"B";
	}
  }
    }
}
int main ()
{
  int n;
  int x[1025];
  cauhinhcuoi = false;
  cin>>n>>k;	
  for(int i=1;i<=n;i++)
    { 
       x[i]=0;
    }
  while(cauhinhcuoi!=true)
  {
//  printResult(x,n);
  intong(x,n);
  sinhbit(x,n);
  }
  printResult(x,n);
  
}
