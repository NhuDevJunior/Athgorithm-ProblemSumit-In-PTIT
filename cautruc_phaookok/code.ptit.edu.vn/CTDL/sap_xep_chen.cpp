#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int a[], int n)
{
    int pos, x;
    cout<<"Buoc 0: "<<a[0]<<endl;
    for (int i = 1; i < n; i++)
    {
        x = a[i]; // lưu lại giá trị của x tránh bị ghi đè khi dịch chuyển các phần tử
        pos = i - 1;
        // tìm vị trí thích hợp để chèn x
        while (pos >= 0 && a[pos] > x)
        {
            // kết hợp với dịch chuyển phần tử sang phải để chừa chỗ cho x
            a[pos + 1] = a[pos];
            pos--;
        }
        // chèn x vào vị trí đã tìm được
        a[pos + 1] = x;
        cout<<"Buoc "<<i<<": ";
        for(int j = 0; j <= i; j++)
            cout<<a[j]<<" ";
        cout<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    InsertionSort(a, n);
}