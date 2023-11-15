#include <iostream>
#include <stack>

using namespace std;

int main() {
    string s;
    cin >> s;
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
        cout << "No";
        }
        else if(!st.empty() && s[i] == ')')
        {
            st.pop();
        }
    }
    if (st.empty())
    {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}