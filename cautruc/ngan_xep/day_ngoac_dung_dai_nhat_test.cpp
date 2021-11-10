#include <bits/stdc++.h> 
#include <stack> 
using namespace std; 
int main(){ 
int t; 
cin>>t; 
while(t--)
{ 
int dem = 0; 
stack <int> s; 
s.push(-1); 
string X; //xet ()(()))))
cin>>X; 
for(int i = 0; i<X.size(); i++)
{ 
if(X[i] == '(')
{ 
 s.push(i); //2,3
} 
else{ 
s.pop(); //xoa 2
if(s.size()>0) 
dem = max(dem,i-s.top()); //5--1
if(s.size() == 0) 
   s.push(i);
}
} 
cout<<dem<<endl; //6
}
 return 0; 
 }
