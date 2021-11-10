#include<iostream>
#include<string>
using namespace std;

string S;
void hoanvi(int stt){
	int n=S.size()-2;
	while(S[n]>=S[n+1]){
		n--;
	}
	if(n==-1)
		cout<<stt<<" "<<"BIGGEST"<<endl;
	else{
		char min = '9' ;
        int imin = n ;
        for(int  k = n+1 ; k<S.size() ; k++) {
            if(S[k] > S[n] && S[k] <=min ) {
                min = S[k] ;
                imin = k ;
            }
        }
		swap(S[n],S[imin]);
	
		for(int i=n+1;i<S.size()-1;i++)
			for(int j=i+1;j<S.size();j++)
				swap(S[j],S[i]);
				
		cout<<stt<<" "<<S<<endl;
	}
}
main(){
	int t;
	cin>>t;
	
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		cin>>S;
		cin.ignore();
		hoanvi(i);
	}
}
