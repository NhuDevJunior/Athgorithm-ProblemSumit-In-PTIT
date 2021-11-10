//Quay lui - BackTrack liet ke cac hoan vi cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, t, X[100], b[100];
void print()
{
    for (int j = 1; j <= n; j++)
        cout << X[j];
    cout << " ";
}
void BackTrack(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (b[j])
        {
            X[i] = j;
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
    while (t--)
    {
        cin >> n;
        for (int j = 1; j <= n; j++)
            b[j] = 1;
        BackTrack(1);
        cout << endl;
    }

    return 0;
}