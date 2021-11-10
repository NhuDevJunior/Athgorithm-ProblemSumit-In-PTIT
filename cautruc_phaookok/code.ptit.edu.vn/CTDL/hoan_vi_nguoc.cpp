#include <bits/stdc++.h>
using namespace std;
int a[100], n, ok = 0;

void in()
{
	for (int i = 1; i <= n; i++)
		cout << a[i];
	cout << " ";
}
void sinh()
{
	int i = n - 1;
	while ((i > 0) && a[i] < a[i + 1])
		i--;
	if (i == 0)
		ok = 1;
	else
	{
		int j = n, m;
		while (a[i] < a[j])
			j--;
		swap(a[i], a[j]);
		int d = i + 1, c = n;
		while (d < c)
		{
			swap(a[d], a[c]);
			d++, c--;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int k = n;
		for (int i = 1; i <= n; i++)
		{
			a[i] = k;
			k--;
		}
		while (!ok)
		{
			in();
			sinh();
		}
		ok = 0;
		cout << endl;
	}

	return 0;
}
//Độ phức tạp của thuật toán O(N!)