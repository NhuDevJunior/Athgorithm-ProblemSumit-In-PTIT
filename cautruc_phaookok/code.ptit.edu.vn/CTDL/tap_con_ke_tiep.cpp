//Sinh to hop chap k cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, k, X[1000];
bool cauhinhcuoi=false;
void sinh(){
	int i=k;
	while((i>0)&&(X[i]==n-k+i))	
        i--;
    if(i == 0){
        cauhinhcuoi=true;
    	return;
    }
	else{	
		X[i]=X[i]+1;	
		for(int j=i+1; j<=n; j++)	
            X[j]=X[i]+(j-i);	
	}
	return;
}
void print(){
    if(cauhinhcuoi)
    {
        for(int j = 1; j <= k; j++)
            cout<<j<<" ";
    }
    else 
    {
        for(int j=1; j<=k; j++)
            cout << X[j] << " ";
    }
	cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while (t--)
    {
       cin>>n>>k;
       for(int j=1; j<=k; j++)	
            cin>>X[j];
        sinh();
        print();
    }
    
	return 0;
}