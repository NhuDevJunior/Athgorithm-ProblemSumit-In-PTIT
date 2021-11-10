//Sinh cac hoan vi cua 1..n
#include <iostream>
using namespace std;
int t, n;
string s;
bool cauhinhcuoi;
void in()
{
    cout<<n<<" ";
    if (cauhinhcuoi)
        cout<<"BIGGEST";
    else
    {
        for (int i = 0; i < s.size(); i++)
            cout << s[i];
    }
    cout << endl;
}
void sinh()
{
    int x = s.size()-2;
    while ((x > -1) && (s[x] >= s[x + 1]))
        x--;
    if (x == -1)
        cauhinhcuoi = true;
    else
    {
        int k = s.size()-1;
        while (s[k] <= s[x])
            k--;
        swap(s[x], s[k]);
        int l = x + 1, r = s.size()-1;
        while (l <= r)
        {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
    return;
}

int main()
{
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin>>n>>s;
        cauhinhcuoi = false;
        sinh();
        in();
    }
    return 0;
}