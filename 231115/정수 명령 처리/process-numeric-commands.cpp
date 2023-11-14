#include <iostream>
#include <stack>

using namespace std;
int main() {
int N;
cin >> N;
stack<int> st;
for(int i=0; i<N; i++)
{
    string s;
    cin >> s;
    if(s=="push")
    {
        int a;
        cin >> a;
        st.push(a);
    }
    else if(s=="pop")
    {
        cout << st.top() << endl;
        st.pop();
    }
    else if(s=="size")
    {
        cout << st.size() << endl;
    }
    else if(s=="empty")
    {
        cout << st.empty() << endl;
    }
    else if(s=="top")
    {
        cout << st.top() << endl;
    }
}
    return 0;
}