//Quay lui - BackTrack liet ke cac xau nhi phan
#include <bits/stdc++.h>
using namespace std;
int t, n, k, tmp;
string s[100], x[100];

void print()
{
    for(int i = 1; i <= n; i++)
        cout<<s[i];
    cout<<endl;
}
void BackTrack1(int i)
{
    for (int j = 65; j <= 66; j++)
    {
        x[i] = j;
        if (i == n)
        {
            int dem = 1;
            for(int l = 1; l <= n; l++)
            {
                if(x[l] == "A" && x[l+1] == "A")
                    dem++;
                else{
                    if(dem == k)
                    tmp++;
                    dem = 1;
                }
            }
        }
        else
            BackTrack1(i + 1);
    }
    return;
}
void in(int i)
{
    for (int j = 65; j <= 66; j++)
    {
        s[i] = j;
        if (i == n)
        {
            int dem = 1;
            for(int l = 1; l <= n; l++)
            {
                if(s[l] == "A" && s[l+1] == "A")
                    dem++;
                else{
                    if(dem == k)
                    print();
                    dem = 1;
                }
            }
        }
        else
            in(i + 1);
    }
    return;
}
int main()
{
        cin>>n>>k;
        tmp = 0;
        BackTrack1(1);
        cout<<tmp<<endl;
        in(1);
    return 0;
}