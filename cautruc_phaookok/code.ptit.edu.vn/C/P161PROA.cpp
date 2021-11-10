#include<bits/stdc++.h>
using namespace std;
int b[2000000]={0};
void snt(int n){
	for(int i=2;i<=n;i++) b[i]=1;
	for (int i=2;i*i<=n;i++){
		if(b[i]){
			for(int j=i*i;j<=n;j+=i) b[j]=0;
		}
	}
}
int main(){
	snt(1e6+1);
	int n;
	cin >> n;
	vector<long long> a(n);
	vector<long long> c(n,0);
	for(int i=0;i<n;i++) {
		cin >> a[i];
		if(sqrt(a[i])*sqrt(a[i])==a[i]) c[i] = sqrt(a[i]);
	}
	for(int i=0;i<n;i++){
		if(b[c[i]]==1) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
