#include <bits/stdc++.h>
using namespace std;

int t, n, p, s, sum, X[1000];
vector< vector<int> > a;
int NT(int i)
{
    if (i < 2)
        return 0;
    for (int j = 2; j <= sqrt(i); j++)
        if (i % j == 0)
            return 0;
    return 1;
}
void BackTrack(int i)
{
    for (int j = X[i - 1] + 1; j <= s - n + i; j++)
    {
        X[i] = j;
        if (i == n)
        {
            sum = 0;
            int flat = 0;
            for (int l = 1; l <= n; l++)
            {
                if(!NT(X[l]))
                {
                    flat = 1;
                    break;
                }
                else 
                    sum+=X[l];
            }
            if (sum == s && !flat)
            {
                vector<int> arr;
                for(int l = 1; l <= n; l++)
                    arr.push_back(X[l]);
                a.push_back(arr);
            }
        }
        else
            BackTrack(i + 1);
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        cin >> n >> p >> s;
        X[0] = p;
        BackTrack(1);
        sort(a.begin(), a.end());
            cout<<a.size()<<endl;
            for(int i = 0; i < a.size(); i++)
            {
                for(int j = 0; j < a[i].size(); j++)
                    cout<<a[i][j]<<" ";
                cout<<endl;
            }
    }
    return 0;
}