//Sinh to hop chap k cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, k, X[1000];
bool cauhinhcuoi = false;
void sinh()
{
    int i = k;
    while (X[i] == X[i-1]+1)
    {
        X[i] = n-k+i;
        i--;
    }
    if (i == 0)
    {
        cauhinhcuoi = true;
        return;
    }
    else
        X[i]--;
    return;
}
void print()
{
    if (cauhinhcuoi)
    {
        for (int j = k; j <= n; j++)
            cout << j << " ";
    }
    else
    {
        for (int j = 1; j <= k; j++)
            cout << X[j] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int j = 1; j <= k; j++)
            cin >> X[j];
        cauhinhcuoi = false;
        sinh();
        print();
    }

    return 0;
}