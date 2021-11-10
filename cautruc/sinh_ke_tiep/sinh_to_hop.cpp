#include<bits/stdc++.h>
using namespace std;
bool cauhinhcuoi=false;
void tohop(int x[],int n,int k)
{
	int i=k;
	while((i>0)&&(x[i]==n-k+i))	
        i--;
    if(i == 0){
        cauhinhcuoi=true;
    	return;
    }
	else{	
		x[i]=x[i]+1;	
		for(int j=i+1; j<=n; j++)	
            x[j]=x[i]+(j-i);	
	}
	return;
}
void printResult(int x[],int k)
{
  for(int i=1;i<=k;i++)
  {
     cout<<x[i];
  }
}
int main(){
int test,n,k;
int x[16];
cin>>test;
while(test>0)
{
  cin>>n>>k;
  cauhinhcuoi=false;
  for(int i=1;i<=k;i++)
  {
  	 x[i]=i;
  }
  while(cauhinhcuoi!=true)	
  {
     printResult(x,k);
     tohop(x,n,k);
     cout<<" ";
  }
  cout<<endl;
  test--;
}
return 0;
}
