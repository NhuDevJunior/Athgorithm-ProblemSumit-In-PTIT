#include <bits/stdc++.h>
using namespace std;
int n, X[1001];
bool cauhinhcuoi=false;
void hoanvi()
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
void print(){
    if(cauhinhcuoi)
    {
        for(int j = 1; j <= n; j++)
            cout<<j<<" ";
    }
    else 
    {
        for(int j=1; j<=n; j++)
            cout << X[j] << " ";
    }
	cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       cin>>n;
       for(int j=1; j<=n; j++)	
            cin>>X[j];
        hoanvi();
        print();
    }
    
	return 0;
}
