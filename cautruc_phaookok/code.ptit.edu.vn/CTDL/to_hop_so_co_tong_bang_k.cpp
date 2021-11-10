#include <bits/stdc++.h>
using namespace std;

int t, n, x, a[100], b[100];
vector < vector <int> > arr;
vector <int> X;

void Try(int i, int sum)
{
    if(sum > x)
    return;
    if(sum == x)
    {
        arr.push_back(X);
        return;
    }
    for(int j = i; j <= n; j++)
    {
        if(sum + a[j] <= x)
        {
            X.push_back(a[j]);
            Try(j, sum+a[j]);
            X.pop_back();
        }
    }
}
int main(){
    cin>>t;
    while (t--)
    {
        cin>>n>>x;
        for(int i = 1; i <= n; i++)
            cin>>a[i];
        sort(a+1, a+n+1);
        arr.clear();
        X.clear();
        Try(1, 0);
        if(!arr.size())
        cout<<-1<<endl;
        else 
        {
            sort(arr.begin(), arr.end());
            for(int i = 0; i < arr.size(); i++)
            {
                cout<<"[";
                for(int j = 0; j < arr[i].size()-1; j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<arr[i][arr[i].size()-1]<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}