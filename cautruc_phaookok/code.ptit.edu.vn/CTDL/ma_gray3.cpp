#include <bits/stdc++.h>
using namespace std;
int t;
string s , a;
int main(){
    cin>>t;
    cin.ignore();
    while (t--)
    {
        cin>>s;
        for(int i = 0; i < s.size(); i++)
        {
            if(i == 0)
            {
                a[i] = s[i];
                continue;
            }
            if(s[i] == a[i-1])
            a[i] = '0';
            else
            a[i] = '1';
        }
        for(int i = 0; i < s.size(); i++)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}
//Độ phức tạp của bài toán O(n)