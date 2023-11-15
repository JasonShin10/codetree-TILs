#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        string s;
        cin >> s;
        if(s=="push_back")
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        else if(s=="pop_back")
        {
            v.pop_back();
        }
        else if(s=="size")
        {
            cout << v.size() << endl;
        }
        else if(s=="get")
        {
            int a;
            cin >> a;
            cout << v[a-1] << endl;
        }
    }
    return 0;
}