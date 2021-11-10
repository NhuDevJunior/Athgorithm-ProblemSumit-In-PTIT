#include<bits/stdc++.h>
using namespace std;
bool cauhinhcuoi=false;
void tohop(int X[],int n)
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
void printResult(int x[],int n)
{
  for(int i=1;i<=n;i++)
  {
     cout<<x[i];
  }
}
int main(){
int test,n;
int x[16];
cin>>test;
while(test>0)
{
  cin>>n;
  cauhinhcuoi=false;
  for(int i=1;i<=n;i++)
  {
  	 x[i]=i;
  }
  while(cauhinhcuoi!=true)	
  {
     printResult(x,n);
     tohop(x,n);
     cout<<" ";
  }
  cout<<endl;
  test--;
}
return 0;
}
