#include<iostream>
using namespace std;
int n;
int a[100005],b[100005];
void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
}
void quicksort(int l, int r){
	if(l<=r){
		int key=b[(l+r)/2];
		int i=l;
		int j=r;
		while(i<=j){
			while(b[i]<key)
				i++;
			while(b[j]>key)
				j--;
			if(i<=j){
				swap(a[i],a[j]);
				swap(b[i],b[j]);
				i++;
				j--;
			}
			
		}
		if(l<j)
			quicksort(l,j);
		if(i<r)
			quicksort(i,r);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		
		init();
		quicksort(1,n);
		int i=1,dem=1;
		for(int j=2;j<=n;j++){
			if(b[i]<=a[j]){
				dem++;
				i=j;
			}
		}
		cout<<dem<<endl;
	}
}
