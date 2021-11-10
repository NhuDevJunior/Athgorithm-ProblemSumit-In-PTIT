#include <bits/stdc++.h>
using namespace std;

int t, n, a, b;
queue<int> q;
int main(){
    cin>>t;
    while (t--)
    {
        cin>>n;
        while (n--)
        {
            cin>>a;
            switch (a)
            {
            case 1:
                cout<<q.size()<<endl;
                break;
            case 2:
                if(q.size())
                cout<<"NO"<<endl;
                else 
                cout<<"YES"<<endl;
                break;
            case 3:
            cin>>b;
            q.push(b);
            break;
            case 4:
            if(q.size())
            q.pop();
            break;
            case 5:
            if(q.size())
            cout<<q.front()<<endl;
            else 
            cout<<-1<<endl;
            break;
            case 6:
            if(q.size())
            cout<<q.back()<<endl;
            else 
            cout<<-1<<endl;
            break;
            default:
                break;
            }
        }
        while (q.size())
        {
            q.pop();
        }
    }
    return 0;
}