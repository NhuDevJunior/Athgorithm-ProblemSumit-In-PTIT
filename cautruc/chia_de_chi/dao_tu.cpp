#include <bits/stdc++.h>
using namespace std;
 
// Function to reverse the words
// of a given string
void printRev(string str)
{
    // Stack to store each
    // word of the string
    stack<string> st;
 
    // Store the whole string
    // in string stream
    stringstream ss(str);
 
    string temp;
    while (getline(ss, temp, ' ')) {
 
        // Push each word of the
        // string into the stack
        st.push(temp);
    }
 
    // Print the string in reverse
    // order of the words
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
 
// Driver Code
int main()
{
    string str;
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
//    str="i love you so much";
    getline(cin,str);
    printRev(str);
    cout<<endl;
    }
    return 0;
}
