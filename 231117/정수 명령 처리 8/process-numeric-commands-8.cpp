#include <iostream>
#include <list>

using namespace std;

int main() {
    int N;
    cin >> N;
    list<int> l;
    for(int i=0; i<N; i++)
    {
        string s;
        cin >> s;
        if(s == "push_front")
        {
            int a;
            cin >>a;
            l.push_front(a);
        }
        else if(s == "push_back")
        {
            int a;
            cin >> a;
            l.push_back(a);
        }
        else if(s == "pop_front")
        {
            cout << l.front() << endl;
            l.pop_front();
        }
        else if( s== "pop_back")
        {
            cout << l.back() << endl;
            l.pop_back();
        }
        else if( s== "size")
        {
            cout << l.size() << endl;
        }
        else if( s == "empty")
        {
            cout << l.empty() << endl;
        }
        else if(s=="front")
        {
            cout << l.front() << endl;
        }
        else if(s=="back")
        {
            cout << l.back() << endl;
        }

    }
    return 0;
}