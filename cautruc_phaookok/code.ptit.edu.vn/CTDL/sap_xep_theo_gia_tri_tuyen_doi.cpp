#include<bits/stdc++.h>
#define ii pair<int, int>
#define ll long long

using namespace std;

int n,k,a[100005];
bool cmp(ii x, ii y){
    if(abs(x.first - k) == abs(y.first - k)) return x.second < y .second;
    return (abs(x.first - k) < abs(y.first - k));
}
void solve(){
    cin >> n >> k;
    ii a[n + 1];
    for(int i = 0 ; i < n ; i++) cin >> a[i].first, a[i].second = i;
    sort(a,a+n,cmp);
    for(int i = 0 ; i < n ; i++)
        cout << a[i].first << " ";
    cout << "\n";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}