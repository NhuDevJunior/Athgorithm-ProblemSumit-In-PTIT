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
int doixung(int x[],int n)
{
	int dem = 0;
  for(int i=1;i<=n/2;i++)
  {
    if(x[i]==x[n-i+1])
    {
	  dem++;
	}
  }
  if(dem==n/2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void printResult(int x[],int n)
{
  if(doixung(x,n)==1)
  {
  for(int i = 1 ;i<=n;i++)
  {
     cout<<x[i]<<" ";
  }
  cout<<endl;
  }
}
int main ()
{
  int t,n;
  int x[1025];
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
}
