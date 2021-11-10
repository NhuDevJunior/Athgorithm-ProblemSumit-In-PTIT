//Quay lui - BackTrack liet ke cac xau nhi phan
#include <bits/stdc++.h>
using namespace std;
int t, n, k, dem, s[100];

void print()
{
    for(int i = 1; i <= n; i++)
        cout<<s[i];
    cout<<" ";
}
void BackTrack(int i)
{
    for (int j = 8; j >= 6; j-=2)
    {
        s[i] = j;
        if (i == n)
            print();
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
        cin>>n;
        while (n)
        {
           BackTrack(1);
           n--;
        }
        cout<<endl;
    }
    return 0;
}