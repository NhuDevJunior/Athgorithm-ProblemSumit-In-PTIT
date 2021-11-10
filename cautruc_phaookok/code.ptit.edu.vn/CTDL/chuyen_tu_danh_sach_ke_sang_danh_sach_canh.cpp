#include <bits/stdc++.h>
using namespace std;

int t, n, sum;
string s;
vector<int> v[105];

void nhap()
{
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        s = s + " ";
        sum = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] >= '0' && s[j] <= '9')
                sum = sum * 10 + (s[j] - '0');
            else if (sum)
            {
                v[i].push_back(sum);
                sum = 0;
            }
        }
    }
}
void in()
{
    for (int i = 0; i < n; i++)
        sort(v[i].begin(), v[i].end());
    int tmp[105][105];
    for (int i = 0; i < 105; i++)
    {
        for (int j = 0; j < 105; j++)
            tmp[i][j] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            int k = v[i][j];
            if (tmp[i][k] && tmp[k][i])
            {
                cout << i << " " << k << endl;
                tmp[i][k] = 0;
                tmp[k][i] = 0;
            }
        }
    }
}

int main()
{
    nhap();
    in();
    return 0;
}