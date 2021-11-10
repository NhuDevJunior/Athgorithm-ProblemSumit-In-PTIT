#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int min_idx;
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
        cout<<"Buoc "<<i+1<<": ";
        for(int i = 0; i < n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    selectionSort(a, n);
}