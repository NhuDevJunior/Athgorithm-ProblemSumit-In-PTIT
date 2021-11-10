#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;
queue<int> q;
int main(){
    cin>>t;
    while (t--)
    {
        cin>>s;
        if(s == "PUSH")
        {
            cin>>n;
            q.push(n);
        }
        else if(s == "POP")
        {
            if(q.size())
            q.pop();
        }
        else if (s == "PRINTFRONT")
        {
            if(q.size())
            cout<<q.front()<<endl;
            else
            cout<<"NONE"<<endl;
        }
    }
    return 0;
}