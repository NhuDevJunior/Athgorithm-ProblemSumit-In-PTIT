//Sinh cac hoan vi cua 1..n
#include <iostream>
using namespace std;
int n, ARR[1000];
bool cauhinhcuoi = false;
void in()
{
    if(cauhinhcuoi)
    {
        for (int i = 1; i <= n; i++)
            cout<<i<<" ";
    }
    else{
        for (int i = 1; i <= n; i++)
            cout << ARR[i] << " ";
    }
    cout<<endl;
}
void sinh()
{
    int x = n - 1;
    while ((x > 0) && (ARR[x] > ARR[x + 1]))
        x--; 
    if (x == 0)
        cauhinhcuoi = true;
    else
    { 
        int k = n;
        while (ARR[k] < ARR[x])
            k--; 
        swap(ARR[x], ARR[k]);
        int l = x + 1, r = n;
        while (l <= r)
        {
            swap(ARR[l], ARR[r]);
            l++;
            r--;
        }
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i = 1; i <= n; i++)
            cin>>ARR[i];
        sinh();
        in();
    }
    
    return 0;
}