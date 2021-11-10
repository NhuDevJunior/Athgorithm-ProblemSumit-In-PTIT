//Sinh xau nhi phan: X[1] .. X[n]
#include <bits/stdc++.h>
using namespace std;
int n;
string s;
bool cauhinhcuoi = false;
void sinh()
{
    int i = s.size()-1;
    while ((i >= 0) && (s[i] == '1'))
        i--;
    if (i == -1)
    {
        cauhinhcuoi = true;
        return;
    }
    else
    {
        for (int j = i; j < s.size(); j++)
        {
            s[j] -= 48;
            s[j] = 1-s[j];
            s[j] +=48;
        }
    }
    return;
}
void print()
{
    if (cauhinhcuoi)
    {
        for (int j = 0; j < s.size(); j++)
        {
            cout << '0';
        }
    }
    else
    {
        for (int j = 0; j < s.size(); j++)
            cout << s[j];
    }
}
int main()
{
    cin >> n;
    cin.ignore();
    while (n--)
    {
        cin>>s;
        sinh();
        print();
        cout<<endl;
    }
    return 0;
}