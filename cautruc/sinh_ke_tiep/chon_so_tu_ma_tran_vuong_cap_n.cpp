#include<bits/stdc++.h>
using namespace std;
int n,t,a[11][11],X[11],kp[11][11],lan=0;
bool cauhinhcuoi=false;
void check()
{
  int dem=0;
  for(int i=1;i<=n;i++)
  {
    int b=X[i];
    dem=dem+a[i][b];
  }
  if(dem==t)
  {
   lan++;
   for(int i=1;i<=n;i++)
   {
      kp[lan][i]=X[i];
   }
  }
}
void in()
{
for(int i=1;i<=lan;i++)
{
   for(int j=1;j<=n;j++)
   {
     cout<<kp[i][j]<<" ";
   }
   cout<<endl;
}
}
void tohop()
{
 int j, k, r, s, temp;
 j = n - 1;
 while (j > 0 && X[j] > X[j + 1])//1. tìm t? trái qua ph?i ch? s? j th?a mãn aj< aj
  j--;
 if (j == 0)
  cauhinhcuoi = true;
 else {
  k = n;
  while (X[j] > X[k]) k--;//2.Tìm ak là s? nh? nh?t còn l?n hon aj trong các s? ? bên ph?i aj; 
  //3. Ð?i ch? aj v?i ak 
  temp = X[j]; 
  X[j] = X[k];
  X[k] = temp;
  r = j + 1; s = n;
  while (r < s){//4. L?t ngu?c do?n t? aj+1 d?n an. 
   temp = X[r]; 
   X[r] = X[s];
   X[s] = temp;
   r++;
   s--;
  }
 }	
}
int main(){
  cin>>n>>t;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
	  cin>>a[i][j];
	}
	X[i]=i;
  }
  while(cauhinhcuoi!=true)
  {
  	check();
    tohop();
  }
  cout<<lan<<endl;
  in();
 
}
