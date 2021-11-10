//Quay lui - BackTrack liet ke cac xau nhi phan
#include <bits/stdc++.h>
using namespace std;
int t, n, s[100], flat;

void print()
{
    flat = 1;
    for(int i = 1; i <= n; i++)
    {
        if(s[i] != s[n-i+1])
        {
            flat = 0;
            break;
        }
    }
    if(flat)
    {
        for(int i = 1; i <= n; i++)
            cout<<s[i]<<"\t";
        cout<<endl;
    }
    
}
void BackTrack(int i)
{
    for (int j = 0; j <= 1; j++)
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
        cin>>n;
        flat = 1;
        BackTrack(1);
        cout<<endl;
    return 0;
}