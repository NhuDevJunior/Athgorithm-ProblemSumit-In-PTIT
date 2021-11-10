#include<iostream>
#include<queue>
#define maxn 2000005
using namespace std;
long long n;

long long A[maxn];
int M=1e9+7;
long long tong=0;
priority_queue<long long , vector<long long >, greater<long long> > Q;
main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>A[i];
		Q.push(A[i]);
	}
	long long x=Q.size();
	while(x>=2){
		long long x1=Q.top();
		Q.pop();
		long long x2=Q.top();
		Q.pop();
		long long sum=(x1+x2)%M;
		tong=(tong+sum)%M;
		Q.push(sum);
		x--;
	}
	cout<<tong<<endl;
}
