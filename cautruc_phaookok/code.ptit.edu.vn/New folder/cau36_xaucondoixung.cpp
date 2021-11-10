#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string s1,s2;
int F[5005][5005];
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s1;
		int m=s1.length();
		s2=s1;
		reverse(s2.begin(),s2.end());
		
		for(int i=0;i<m;i++){
			F[i][0]=0;
			F[0][i]=0;
		}
		
		for(int i=0;i<m;i++)
			for(int j=0;j<m;j++){
				if(s1[i]==s2[j]){
					F[i+1][j+1]=F[i][j]+1;
				}
				else 
					F[i+1][j+1]=max(F[i+1][j],F[i][j+1]);
			}
		cout<<F[m][m]<<endl;
	}
	
}
