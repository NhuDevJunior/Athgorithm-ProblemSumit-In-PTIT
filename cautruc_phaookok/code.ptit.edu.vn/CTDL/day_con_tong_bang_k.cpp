//Quay lui - BackTrack liet ke cac to hop chap k phan tu cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, k, dem, X[100], a[100];
vector <vector <int> > arr;

void BackTrack(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        X[i] = j;
        if (i == n)
        {
            int sum = 0;
            for (int i = 1; i <= n; i++)    
            {
                if (X[i])
                    sum += a[i];
            }
            if (sum == k)
            {
                vector <int> l;
                l.clear();
                for(int i = 1; i <= n; i++)
                {
                    if (X[i])
                        l.push_back(a[i]);
                }
                arr.push_back(l);
            }
        }
        else
            BackTrack(i+1);
    }
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arr.clear();
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a+1, a + n+1);
        BackTrack(1);
        sort(arr.begin(), arr.end());
        if(arr.size() == 0)
        cout<<-1<<endl;
        else 
        {
            for(int i = 0; i < arr.size(); i++)
            {
                cout<<"[";
                for(int j = 0; j < arr[i].size()-1; j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<arr[i][arr[i].size()-1]<<"] ";
            }
        }
        cout << endl;
    }
    return 0;
}