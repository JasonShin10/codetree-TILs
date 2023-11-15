#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        string s;
        cin >> s;
        if(s == "push")
        {
            int a;
            cin >> a;
            q.push(a);   
        }
        else if(s=="pop")
        {
            cout << q.front() << endl;
            q.pop();
        }
        else if(s=="size")
        {
            cout << q.size() <<endl;
        }
        else if(s=="empty")
        {
            cout << q.empty()<< endl;
        }
        else if(s=="front")
        {
            cout << q.front() << endl;
        }
    }
    return 0;
}