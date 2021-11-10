#include<iostream>
#include<algorithm>
using namespace std;
int A[100005];
int n;
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>A[i];
		sort(A+1,A+n+1);
		for(int i=1;i<=n;i++)
			cout<<A[i]<<" ";
		cout<<endl;
	}
}
