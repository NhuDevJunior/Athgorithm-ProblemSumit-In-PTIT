//xau nhi phan ke tiep
#include<bits/stdc++.h>
using namespace std;
void sinhbit(string x,int n)
{
	//nhap du lieu vao
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
//sinh bit
  int i = n;
      while (i > 0 && arraynr[i] == 0) {
        arraynr[i] = 1;
        i--;
    }
    arraynr[i] = 0;
	 //in ra xau nhi phan
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
