#include<bits/stdc++.h>
using namespace std;
int t, n, a[100005], b[100005], c[100005];

void nhap(){
    for(int i = 0; i < 100005; i++)
        b[i] = 0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
        
}
void InsertionSort(int a[], int c[], int n)
{
    int pos, x, y;
    for (int i = 1; i < n; i++)
    {
        x = c[i]; // lưu lại giá trị của x tránh bị ghi đè khi dịch chuyển các phần tử
        y = a[i];
        pos = i - 1;
        // tìm vị trí thích hợp để chèn x
        while (pos >= 0 && c[pos] < x)
        {
            // kết hợp với dịch chuyển phần tử sang phải để chừa chỗ cho x
            c[pos + 1] = c[pos];
            a[pos + 1] = a[pos];
            pos--;
        }
        // chèn x vào vị trí đã tìm được
        c[pos + 1] = x;
        a[pos + 1] = y;
    }
}
void in(){
    sort(a, a+n);
    for(int i = 0; i < n; i++)
        c[i] = b[a[i]];
    InsertionSort(a, c, n);
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        in();
    }
    return 0;
}