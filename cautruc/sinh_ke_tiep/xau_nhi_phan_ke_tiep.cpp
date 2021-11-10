//xau nhi phan ke tiep
#include<bits/stdc++.h>
using namespace std;
void sinhbit(string x,int n)
{
    int k;
    int arraynr[n];
    int j = 1;
    for (int i=0;i<n;i++)
     {
        k=(int)x[i]-48;                         //chuyen ki tu char sang int
        if(k>=0 && k<=10)
		{
		arraynr[j]=k;
		j++;
		} 
     }
//     for(int i=1;i<=n;i++)
//     {
//	 cout<<arraynr[i]<<" ";
//	 }
 int i = n;
 while (arraynr[i]==1 && i > 0){
  i--;
 }
   arraynr[i] = 1;    // còn không thì gán a[i]=1
  for (int j = i + 1; j <= n; j++)
  	{
   arraynr[j] = 0;   // gán t?t c? ph?n t? phía sau a[i] =0
   }
        for(int i=1;i<=n;i++)
     {
	 cout<<arraynr[i];
	 }
	 
}
int main ()
{
  int t;
  cin>>t;
  while(t>0)
  {
  string x;
  cin>>x;
  int n = x.length();
  sinhbit(x,n);
  cout<<endl;
  t--;
  }
}
