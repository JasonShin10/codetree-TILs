#include <iostream>
#include <list>

using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    list<char> l;
    
    for (int i=0; i<n; i++)
    {
        char a;
        cin >> a;
        l.push_back(a);
    }
    list<char>::iterator it;
    it = l.end();
    for (int i=0; i<m; i++)
    {
        char a;
        cin >> a;
        if(a == 'L')
        {
            if(it != l.begin())
            {
                it--;
            }
        }
        else if( a== 'R')
        {
           if(it != l.end())
           {
            it++;
           }
        }
        else if( a== 'D')
        {
            if(it != l.end())
            {
                it = l.erase(it);
            }
        }
        else if(a == 'P')
        {
            char c;
            cin >> c;
            l.insert(it,c);
        }
    }

    for(list<char>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it;
    }

    return 0;
}