#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int b[100][100];
int main(){
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			b[i][j]=a[j][i];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int sum = 0;
			for (int k = 1; k <= m; k++) {
				sum += a[i][k] * b[k][j];
			}
			cout << sum <<" ";
		}
		cout << "\n";
	}
}
