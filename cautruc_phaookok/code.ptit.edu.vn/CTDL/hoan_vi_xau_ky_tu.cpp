//Quay lui - BackTrack liet ke cac hoan vi cua 1..n
#include <bits/stdc++.h>
using namespace std;
int t, n, b[1000];
string x, S[1000];
void print()
{
    for (int j = 1; j <= n; j++)
        cout << S[j];
    cout << " ";
}
void BackTrack(int i)
{
    for (int j = 65; j < 65+n; j++)
    {
        if (b[j])
        {
            S[i] = j;
            b[j] = 0;
            if (i == n)
                print();
            else
                BackTrack(i + 1);
            b[j] = 1;
        }
    }
    return;
}
int main()
{
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin>>x;
        n = x.size();
        for (int j = 65; j < 65+n; j++)
            b[j] = 1;
        BackTrack(1);
        cout << endl;
    }

    return 0;
}