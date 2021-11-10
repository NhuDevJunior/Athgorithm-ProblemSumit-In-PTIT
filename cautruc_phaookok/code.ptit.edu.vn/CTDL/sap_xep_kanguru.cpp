#include <bits/stdc++.h>

using namespace std;

int t, n, a[100005], b[100005], c[100005];

void nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
}
void in()
{
    int tmp = n/2-1, dem = 0, j;
    for (int i = n-1; i >= n/2; i--)
    {
        for (j = tmp; j >= 0; j--)
        {
            if (a[i] >= 2 * a[j])
            {
                dem++;
                break;
            }
        }
        tmp = j-1;
    }
    cout << n - dem << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        in();
    }
}