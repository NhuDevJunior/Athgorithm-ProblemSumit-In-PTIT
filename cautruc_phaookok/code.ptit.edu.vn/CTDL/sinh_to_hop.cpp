//Quay lui - BackTrack liet ke cac to hop chap k phan tu cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, k, X[100];
void print()
{
    for (int j = 1; j <= k; j++)
        cout << X[j];
    cout<<" ";
}
void BackTrack(int i)
{ 
    for (int j = X[i - 1] + 1; j <= n - k + i; j++)
    {
        X[i] = j;   
        if (i == k) 
            print();
        else
            BackTrack(i + 1);
    }
    return;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        BackTrack(1); 
        cout<<endl;
    }
    return 0;
}