#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        if(s=="push_front")
        {
            int a;
            cin >> a;
            dq.push_front(a);
        }
        else if(s=="push_back")
        {
            int a;
            cin >> a;
            dq.push_back(a);
        }  
        else if(s=="pop_front")
        {
            cout << dq.front() << endl;
            dq.pop_front();
        }
        else if(s=="pop_back")
        {
            cout << dq.back() << endl;
            dq.pop_back();
        }
        else if(s=="size")
        {
            cout << dq.size() << endl;
        }
          else if(s=="empty")
        {
            cout << dq.empty() << endl;
        }
          else if(s=="front")
        {
            cout << dq.front() << endl;
        }
          else if(s=="back")
        {
            cout << dq.back() << endl;
        }


    }

    return 0;
}