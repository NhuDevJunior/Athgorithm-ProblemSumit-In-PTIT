#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;
deque <int> de;
int main(){
    cin>>t;
    while (t--)
    {
        cin>>s;
        if(s == "PUSHFRONT")
        {
            cin>>n;
            de.push_front(n);
        }
        else if(s == "PRINTFRONT")
        {
            if(de.size())
            cout<<de.front()<<endl;
            else 
            cout<<"NONE"<<endl;
        }
        else if(s == "POPFRONT")
        {
            if(de.size())
            de.pop_front();
        }
        else if(s == "PUSHBACK")
        {
            cin>>n;
            de.push_back(n);
        }
        else if(s == "PRINTBACK")
        {
            if(de.size())
            cout<<de.back()<<endl;
            else
            cout<<"NONE"<<endl;
        }
        else if(s == "POPBACK")
        {
            if(de.size())
            de.pop_back();
        }
    }
    return 0;
}