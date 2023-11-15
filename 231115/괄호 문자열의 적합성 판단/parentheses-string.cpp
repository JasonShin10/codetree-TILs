#include <iostream>
#include <stack>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool noMatch = false;
    stack<char> st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(')
        {
        st.push(s[i]);
        }
        else if(st.empty() && s[i] ==')')
        {
        break;
        noMatch =true;
        cout << "No";
        }
        else if(!st.empty() && s[i] == ')')
        {
            st.pop();
        }
    }
    if (st.empty() && noMatch == false)
    {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}