#include <bits/stdc++.h>
using namespace std;

int t, n, dem, a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
void tinh()
{
    for (int i = 0; i < 10; i++)
    {
        dem += n / a[i];
        n %= a[i];
    }
    cout << dem << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        dem = 0;
        tinh();
    }
    return 0;
}
//Độ phức tạp thuật toán O(n)