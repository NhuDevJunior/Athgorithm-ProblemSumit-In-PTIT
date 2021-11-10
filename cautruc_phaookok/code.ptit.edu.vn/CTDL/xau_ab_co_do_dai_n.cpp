//Quay lui - BackTrack liet ke cac xau nhi phan
#include <bits/stdc++.h>
using namespace std;
int t, n;
string s[100];

void print()
{
    for(int i = 1; i <= n; i++)
        cout<<s[i];
    cout<<" ";
}
void BackTrack(int i)
{
    for (int j = 65; j <= 66; j++)
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
        BackTrack(1);
        cout<<endl;
    }
    return 0;
}
//Độ phức tạp của thuật toán O(N!)