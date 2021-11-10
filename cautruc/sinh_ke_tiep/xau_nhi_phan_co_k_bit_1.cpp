//Quay lui - BackTrack liet ke cac xau nhi phan
#include <bits/stdc++.h>
using namespace std;
int t, n, k, dem, s[100];

void print()
{
    for(int i = 1; i <= n; i++)
        cout<<s[i];
    cout<<endl;
}
void BackTrack(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        s[i] = j;
        if (i == n)
        {
            for(int l = 1; l <= n; l++)
                dem+=s[l];
            if(dem == k)
            print();
            dem=0;
        }
        else
            BackTrack(i + 1);
    }
    return;
}
int main()
{
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        BackTrack(1);
    }
    return 0;
}
